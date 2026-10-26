class Solution {
public:
    bool isValid(string s) {
        if (s.length() == 0) return true;
        std::stack<char> st;
        char top;
        for (char s_char: s){

            if (!st.empty()){
                top = st.top();
                if (top == '(' && s_char == ')'){
                    st.pop();
                } else if (top == '[' && s_char == ']'){
                    st.pop();
                } else if (top == '{' && s_char == '}'){
                    st.pop();
                } else {
                    st.push(s_char);
                }
            }
            else {
                st.push(s_char);
            }
            
        }
        return st.empty();

    }
};
