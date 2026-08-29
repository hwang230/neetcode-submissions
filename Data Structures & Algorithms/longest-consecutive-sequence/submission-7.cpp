#include <iostream>
class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if (nums.size() == 1 || nums.size() == 0){
            return nums.size();
        }
        // store unique elements
        std::map<int, int> counts;
        for (int num: nums){
            counts[num] = 1;
        }
        // determine which are the possible starts
        std::vector<int> starts;
        for (const auto& [key, value]: counts){
            if (counts.count(key-1) == 1){
                continue;
            } else{
                starts.push_back(key);
            }
        }
        // check the length
        int curr_max = 0;
        int curr = 0;
        for (int start: starts){
            int key = start;
            int if_reached_end = 0;
            while(!if_reached_end){
                if (counts.count(key) == 1){
                    curr += 1;
                    key += 1;
                } else{
                    if (curr > curr_max){
                        curr_max = curr;
                    }
                    curr = 0;
                    if_reached_end = 1;
                }
            }
        }
        return curr_max;
    }
};
