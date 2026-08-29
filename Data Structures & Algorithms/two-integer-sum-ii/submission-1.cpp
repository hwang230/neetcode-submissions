class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int begin = 0;
        int end = numbers.size()-1;

        while (begin < end){
            int sum = numbers[begin] + numbers[end];
            if (sum > target){
                end -= 1;
            } else if (sum < target){
                begin += 1;
            } else {
                return {begin + 1, end + 1};
            }
        }
    }
};
