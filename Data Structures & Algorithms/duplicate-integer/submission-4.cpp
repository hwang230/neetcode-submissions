class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        std::map<int, int> db; 

        for (int num: nums){
            if (db.count(num) == 0){
                db[num] = 1;
            } else{
                return true;
            }
        }
        return false;
    }
};