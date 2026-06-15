class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
         int n = nums.size();
        unordered_set<int>st;
        for(int i = 0; i < n; i++){
            st.insert(nums[i]);
        }
        int maxLen = 0;
        for(int i = 0; i < n; i++){
            if(st.find(nums[i]-1)==st.end()){
                int curr_ele = nums[i];
                int curr_len = 1;
                while(st.find(curr_ele+1)!=st.end()){
                    curr_ele++;
                    curr_len++;
                }
                maxLen = max(maxLen,curr_len);
            }
        }
        return maxLen;
        
    }
};
