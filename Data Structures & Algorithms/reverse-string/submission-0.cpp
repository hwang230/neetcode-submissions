class Solution {
public:
    void reverseString(vector<char>& s) {
        if (s.empty()) return;
        char* left_ptr = s.data();
        char* right_ptr = s.data() + s.size() - 1;

        char placeholder;
        while (left_ptr < right_ptr){
            placeholder=*left_ptr;
            *left_ptr=*right_ptr;
            *right_ptr=placeholder;
            left_ptr++;
            right_ptr--;
        }
    }
};