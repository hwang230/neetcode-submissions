#include <cmath>
class Solution {
public:
    int search(vector<int>& nums, int target) {
        int begin = 0;
        int end = nums.size()-1;
        int idx = -1;
        int curr = 0;
        int middle = 0;
        while (begin != end){
            middle = (begin+end)/2;
            curr = nums[middle];
            if (curr == target){
                idx = middle;
                break;
            } else{
                if (curr > target){
                    // this is to avoid case where target is smaller than 
                    // all elements 
                    if (middle-1 < 0){
                        break;
                    }
                    end = middle - 1;

                } else{
                    begin = middle + 1;
                }
            }
        }
        if (nums[begin] == target){
            idx = begin;
        }

        return idx;
    }
};
