// 1047. Remove All Adjacent Duplicates In String
// Difficulty: Easy

class Solution {
public:
    stack<char> st;
    string removeDuplicates(string s) {
        string result = "";
        for(int i=0; i<s.length(); i++) {
            if(st.empty()) {
                st.push(s[i]);
            }
            else {
                if(st.top() == s[i]) {
                    st.pop();
                }
                else {
                    st.push(s[i]);
                }
            }
        }

        while(!st.empty()) {
            result += st.top();
            st.pop();
        }

        reverse(result.begin(), result.end());

        return result;
    }
};
