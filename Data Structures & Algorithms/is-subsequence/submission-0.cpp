class Solution {
public:
    bool isSubsequence(string s, string t) {
        int s_ptr = 0;
        int t_ptr = 0;
        int num_completion = 0;
        // return false immediately if s length greater than t
        if (s.length() > t.length()){
            return false;
        } 

        // advance t_ptr until reaching end or matching one from s
        while (num_completion != s.length()){
            if (s[s_ptr] == t[t_ptr]){
                s_ptr += 1;
                t_ptr += 1;
                num_completion += 1;
            } else {
                t_ptr += 1;
                if (t_ptr > t.length()){
                    return false;
                }
            }
        }
        return true; 
    }
};