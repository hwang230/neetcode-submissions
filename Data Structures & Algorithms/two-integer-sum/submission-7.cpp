class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        std::map<int, int> db;
        int idx = 0;
        for (int num: nums){
            if (db.count(target-num) == 1){
                return {db[target-num], idx};
            } 
            db[num] = idx;
            idx += 1;
        }
        return {};
    }
};
