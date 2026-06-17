class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int>st;
        int n = operations.size();
        int res = 0;
        for(int i = 0; i < n; i++){
            if(operations[i]=="+"){
                int n1 = st.top();
                st.pop();
                int n2 = st.top()+n1;
                st.push(n1);
                st.push(n2);
                res+=n2;
            }else if(operations[i]=="D"){
                st.push(2*st.top());
                res+=st.top();
            }else if(operations[i]=="C"){
                res-=st.top();
                st.pop();
            }else{
                st.push(stoi(operations[i]));
                res+=st.top();
            }
        }
        return res;
        
    }
};