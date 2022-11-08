// 1544. Make The String Great
// Difficulty: Easy

class Solution {
public:
    string makeGood(string s) {
        stack<char> st;
        string result = "";

        for(int i=0; i<s.length(); i++) {
            if(st.empty()) {
                st.push(s[i]);
            }
            else {
                if(st.top() - s[i] == 32 || s[i] - st.top() == 32) {
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
