#include <cmath>
class Solution {
public:
    int search(vector<int>& nums, int target) {
        int begin = 0;
        int end = nums.size()-1;
        int idx = -1;
        int curr = 0;
        while (begin != end){
            curr = nums[(begin+end)/2];
            if (curr == target){
                idx = (begin+end)/2;
                break;
            } else{
                if (curr > target){
                    end = (begin+end)/2 - 1;
                    if (end == -1){
                        break;
                    }
                } else{
                    begin = (begin+end)/2 + 1;
                }
            }
        }
        if (nums[begin] == target){
            idx = begin;
        }

        return idx;
    }
};
