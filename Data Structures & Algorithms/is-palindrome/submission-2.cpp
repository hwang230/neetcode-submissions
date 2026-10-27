#include <cctype>
class Solution {
public:
    bool isPalindrome(string s) {
        int begin = 0;
        int end = s.length()-1;

        while (begin < end){
            if (!isalnum(s[begin])){
                begin += 1;
            } else if (!isalnum(s[end])){
                end -= 1;
            } else if (std::toupper(s[begin]) == std::toupper(s[end]) && isalnum(s[begin]) && isalnum(s[end])){
                begin += 1;
                end -= 1;
            } else{
                return false;
            }
        }
        return true;
    }
};
