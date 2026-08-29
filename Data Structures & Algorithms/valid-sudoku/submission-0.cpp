class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        // checking horizontal/vertical row
        std::map<char, int> counts;
        std::map<char, int> counts_vertical;
        std::vector<std::vector<std::map<char, int>>> counts_3x3(3, std::vector<std::map<char, int>>(3));
        for (int i = 0; i < 9; i++){
            counts.clear();
            counts_vertical.clear();
            for (int j = 0; j < 9; j++){
                // checking horizontal
                if (counts.count((board[i][j])) == 0 && board[i][j] != '.'){
                    counts[board[i][j]] = 1;
                } else if (counts.count((board[i][j])) == 1){
                    return false;
                }
                // checking vertical
                if (counts_vertical.count(board[j][i]) == 0 && board[j][i] != '.'){
                    counts_vertical[board[j][i]] = 1;
                } else if (counts_vertical.count((board[j][i])) == 1){
                    return false;
                }
                // checking 3x3
                std::map<char, int> temp = counts_3x3[i/3][j/3];
                if (counts_3x3[i/3][j/3].count(board[i][j]) == 0 && board[i][j] != '.'){
                    counts_3x3[i/3][j/3][board[i][j]] = 1;
                } else if (counts_3x3[i/3][j/3].count(board[i][j]) == 1){
                    return false;
                }

            }
        }
        // reaching true here
        return true;
    }
};
