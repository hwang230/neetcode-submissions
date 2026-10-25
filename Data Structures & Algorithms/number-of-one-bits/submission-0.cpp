class Solution {
public:
    int hammingWeight(uint32_t n) {
        uint32_t mask;
        int count = 0;
        for (int i = 31; i >= 0; i--){
            mask = uint32_t{1} << i;
            if (n >= mask){
                n -= mask;
                count++;
            }
        }
        return count;
    }
};
