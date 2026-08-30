class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if (s.length() == 0 || s.length() == 1){
            return s.length();
        }
        std::map<char, int> db;
        int max = 0;
        int curr = 1;
        int left = 0;
        int right = 1;
        // two ptrs technique
        // We should increment right until we encounter a dup
        // When dup encountered, remove the one stored in left and shift left
        db[s[left]] = 1;
        while (right < s.length()){
            // already encountered this in the current substring
            if (db.count(s[right]) == 1){
                // update if dup found
                if (curr > max){
                    max = curr;
                }
                
                db[s[left]] -= 1;
                // remove from map if substring no longer contains this
                if (db[s[left]] == 0){
                    db.erase(s[left]);
                }
                curr -= 1;
                left += 1;
            } 
            // Did not find dup in the most recent one, no update on max
            else{
                db[s[right]] = 1;
                curr += 1;
                right += 1;
                if (curr > max){
                    max = curr;
                }
            }

        }
        
        return max;
    }
};
