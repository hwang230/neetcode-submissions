class Solution {
public:
    int climbStairs(int n) {
        int result_1 = 1;
        int result_2 = 2;
        int result = 0;
        if (n < 3) return n;
        else {
            for (int i = 3; i <= n; i++){
                result = result_1 + result_2;
                result_1 = result_2;
                result_2 = result;
            }
        }
        return result;
    }
};
