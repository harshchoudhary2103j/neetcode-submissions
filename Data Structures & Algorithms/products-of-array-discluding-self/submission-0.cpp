class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int>forw(n);
        vector<int>backw(n);
        forw[0] = 1;
        backw[n-1] = 1;
        for(int i = 1; i < n; i++){
            forw[i] = forw[i-1]*nums[i-1];
        }
        for(int i = n-2; i>=0; i--){
            backw[i] = backw[i+1]*nums[i+1];
        }
        vector<int>ans(n);

        for(int i = 0; i < n; i++){
            ans[i] = forw[i]*backw[i];
        }
        return ans;



    }
};
