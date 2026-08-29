class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxProfit = 0;

        // sliding window technique
        // for (int i = 0; i < prices.size()-1 ; i++){
        //     for (int j = i + 1; j < prices.size(); j++){
        //         if (prices[j] - prices[i] > maxProfit){
        //             maxProfit = prices[j] - prices[i];
        //         } 
        //     }
        // }

        // two pointers technique
        int left = 0;
        int right = 1;
        while (right < prices.size()){
            if (prices[left] > prices[right]){
                left += 1;
                right = (right == left) ? right + 1 : right;
            } else{
                if (prices[right] - prices[left] > maxProfit){
                    maxProfit = prices[right] - prices[left];
                }
                right += 1;
            }
        }
        return maxProfit;
    }
};
