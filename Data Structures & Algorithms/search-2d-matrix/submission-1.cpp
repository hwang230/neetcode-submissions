class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        // maybe use modulo and remainder to find?
        // use / to find the row
        // use % to find the column
        // we could check by imagining this matrix as a single row
        if (matrix.size() == 0) return false;
        int end = matrix.size() * matrix[0].size() - 1;
        int begin = 0;
        int middle = (begin + end)/2;
        int row_size = matrix[0].size();
        int row = middle / row_size;
        int col = middle % row_size;
        int curr = matrix[row][col];
        while (begin < end){
            if (curr == target){
                return true;
            } 
            if (curr > target){
                end = middle - 1;
            } else{
                begin = middle + 1;
            }
            // not found, should update pointer accordingly
            middle = (begin + end)/2;
            row = middle / row_size;
            col = middle % row_size;
            curr = matrix[row][col];
        }
        if (matrix[row][col] == target) return true;
        return false;
    }
};
