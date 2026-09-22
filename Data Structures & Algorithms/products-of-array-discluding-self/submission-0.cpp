class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> prefix;
        vector<int> suffix;
        vector<int> result;
        // left to right filling prefix
        int prev = 0;
        for (int i = 0; i < nums.size(); i++){
            prefix.push_back(prev); 
            if (i == 0){
                prev += nums[i];
            } else {
                prev *= nums[i];
            }
        }

        // right to left filling suffix
        int post = 0;
        for (int i = nums.size()-1; i >= 0; i--){
            suffix.push_back(post);
            if (i == nums.size()-1){
                post += nums[i];
            } else{
                post *= nums[i];
            }
        }

        for (int i = 0; i < nums.size(); i++){
            if (i == 0){
                result.push_back(suffix[nums.size()-1]);
            } else if (i == nums.size()-1){
                result.push_back(prefix[nums.size()-1]);
            } else{
                result.push_back(prefix[i]*suffix[nums.size()-1-i]);
            }
        }

        return result;
    }
};
