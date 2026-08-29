class Solution {
public:
    int maxArea(vector<int>& heights) {
        int begin = 0;
        int end = heights.size()-1;

        int max = 0;
        while (begin != end){
            int current = 0;
            int lowest = (heights[begin] > heights[end]) ? heights[end] : heights[begin];
            current = lowest * (end-begin);
            if (current > max){
                max = current;
            }
            // decide which pointer to move
            if (heights[begin] > heights[end]){
                end -= 1;
            } else{
                begin += 1;
            }
            
        }
        return max;
    }
};
