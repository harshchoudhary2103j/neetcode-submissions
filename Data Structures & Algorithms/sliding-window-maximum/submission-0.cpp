class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        int n = nums.size();
        priority_queue<pair<int,int>>pq;
        vector<int>ans;
        for(int i = 0; i < k; i++){
            pq.push({nums[i], i});
        }
        ans.push_back(pq.top().first);
        int r = k;
        
        while(r < n){
          
            pq.push({nums[r],r});
            while(r-pq.top().second >= k){
                pq.pop();
            }
            ans.push_back(pq.top().first);
            r++;


        }
        return ans;
        
    }
};
