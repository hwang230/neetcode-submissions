class Solution {
public:
    bool isAnagram(string s, string t) {
        std::map<char, int> counts; 
        for (char s_char:s){
            if (counts.count(s_char) == 0){
                counts[s_char] = 1;
            } else{
                counts[s_char] += 1;
            }
        }
        for (char t_char:t){
            counts[t_char] -= 1;
            if (counts[t_char] < 0){
                return false;
            }
        }
        for (const auto& [key, value]: counts){
            if (counts[key] != 0){
                return false;
            }
        }
        return true;
    }
};
