class Solution {
public:
    void reverseString(vector<char>& s) {
        if (s.empty()) return;
        char* left_ptr = s.data();
        char* right_ptr = s.data() + s.size() - 1;

        char placeholder;
        while (left_ptr < right_ptr){
            // left_ptr is a *, use * again to get the value
            placeholder=*left_ptr;
            // we want to change the value of left_ptr
            // use *right_ptr to store it
            *left_ptr=*right_ptr;
            // then change right_ptr stored value from placeholder
            *right_ptr=placeholder;
            left_ptr++;
            right_ptr--;
        }
    }
};