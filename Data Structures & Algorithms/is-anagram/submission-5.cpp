class Solution {
public:
    bool isAnagram(string s, string t) {
        // return right away if not same length
        if (s.length() != t.length()){
            return false;
        }

        std::map<char, int> db; 
        for (char s_char: s){
            if (db[s_char] == 0){
                db[s_char] = 1;
            } else{
                db[s_char] += 1;
            } 
        }

        // remove from db 
        for (char t_char: t){
            db[t_char] -= 1;
            if (db[t_char] == -1){
                return false;
            }
        }

        // check if any elements remain in db
        for (const auto& [key, value]: db){
            if (db[key] == 0){
                continue;
            } else{
                return false;
            }
        }


        return true;
    }
};
