class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        // need to start from first 0 occurrence
        if (nums.size() == 0 || nums.size() == 1) return;
        // set first occurrence of zero
        int zeroStart = -1;
        for (int i = 0; i < nums.size(); i++){
            if (nums[i] == 0) {
                zeroStart = i;
                break;
            }
        }
        if (zeroStart == -1) return;
        int swap;
        int nonZeroStart = zeroStart + 1;
        while (nonZeroStart <= nums.size()-1){
            if (nums[nonZeroStart] != 0){
                swap = nums[nonZeroStart];
                nums[nonZeroStart] = 0;
                nums[zeroStart] = swap;
                zeroStart++;
                nonZeroStart++;
            } else{
                nonZeroStart++;
            }
        }
    }
};