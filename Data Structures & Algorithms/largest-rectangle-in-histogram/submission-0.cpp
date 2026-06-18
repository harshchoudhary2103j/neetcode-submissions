class Solution {
public:
     void next_smaller(vector<int>&heights,vector<int>&nse){
        int n = heights.size();
        stack<int>st;
        for(int i = n-1;i>=0;i--){
            while(!st.empty() && heights[st.top()]>heights[i]){
                st.pop();
            }
            if(!st.empty()){
                nse[i] = st.top();
            }
            st.push(i);
        }

        
    }
    void previous_smaller(vector<int>&heights,vector<int>&pse){
        int n = heights.size();
        stack<int>st;
        for(int i = 0;i<n;i++){
            while(!st.empty() && heights[st.top()]>=heights[i]){
                st.pop();
            }
            if(!st.empty()){
                pse[i] = st.top();
            }
            st.push(i);
        }

        
    }
    int largestRectangleArea(vector<int>& heights) {
        int n = heights.size();
        vector<int>nse(n,n);
        vector<int>pse(n,-1);
        next_smaller(heights,nse);
        previous_smaller(heights,pse);
        int ans = 0;
        for(int i = 0; i<n; i++){
            ans = max(ans,heights[i]*(nse[i]-pse[i]-1));
        }
        return ans ;

        
    }
};
