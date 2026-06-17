class Solution {
public:
    string decodeString(string s) {
        stack<char> st;

        for (char ch : s) {
            if (ch != ']') {
                st.push(ch);
            } else {
                
                string curr = "";
                while (!st.empty() && st.top() != '[') {
                    curr = st.top() + curr;
                    st.pop();
                }

                st.pop();

               
                string num = "";
                while (!st.empty() && isdigit(st.top())) {
                    num = st.top() + num;
                    st.pop();
                }

                int k = stoi(num);

              
                string repeated = "";
                while (k--) {
                    repeated += curr;
                }

                for (char c : repeated) {
                    st.push(c);
                }
            }
        }

        string ans = "";
        while (!st.empty()) {
            ans = st.top() + ans;
            st.pop();
        }

        return ans;
    }
};