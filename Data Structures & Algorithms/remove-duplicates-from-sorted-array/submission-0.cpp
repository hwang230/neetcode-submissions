class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if (nums.size() == 1 or nums.size() == 0) return nums.size();
        int left_ptr = 0;
        int right_ptr = 1;
        while (right_ptr != nums.size()){
            if (nums[left_ptr] == nums[right_ptr]){
                nums.erase(nums.begin() + right_ptr);
            } else{
                left_ptr++;
                right_ptr++;
            }
        }
        return nums.size();
    }
};