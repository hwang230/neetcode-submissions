#include <limits>
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int curr_max = 0;
        int max = -10000;

        for (int i = 0; i < nums.size(); i++){
            // local max
            if (curr_max + nums[i] > nums[i]){
                curr_max = curr_max + nums[i];
            } else{
                curr_max = nums[i];
            }
            // global max
            if (curr_max > max){
                max = curr_max;
            } 
        }
        
        return max;
    }
};
