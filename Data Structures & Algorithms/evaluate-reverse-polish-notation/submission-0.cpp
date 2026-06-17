class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int>st;
        int res = 0;
        for(int i = 0; i < tokens.size(); i++){
            if(tokens[i]=="+"){
                int n1 = st.top();
                st.pop();
                int n2 = st.top();
                st.pop();
                int sum = n1+n2;
                st.push(sum);
            }else  if(tokens[i]=="-"){
                int n1 = st.top();
                st.pop();
                int n2 = st.top();
                st.pop();
                int diff = n2-n1;
                st.push(diff);
            }else  if(tokens[i]=="*"){
                int n1 = st.top();
                st.pop();
                int n2 = st.top();
                st.pop();
                int prod = n1*n2;
                st.push(prod);
            }else  if(tokens[i]=="/"){
                int n1 = st.top();
                st.pop();
                int n2 = st.top();
                st.pop();
                int div = n2/n1;
                st.push(div);
            }else{
                st.push(stoi(tokens[i]));
            }

        }
        return st.top();
        
    }
};
