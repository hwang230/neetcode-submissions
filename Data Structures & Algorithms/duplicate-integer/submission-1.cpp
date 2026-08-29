class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        std::map<int, int> dict;
        for (int num:nums){
            if (dict.count(num) > 0){
                return true;
            }
            else{
                dict[num] = 1;
            }
        }
        return false;
    }
};