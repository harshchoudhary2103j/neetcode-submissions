class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int,int>mpp;
        for(int i = 0; i <= min(k, (int)nums.size()-1); i++){
            mpp[nums[i]]++;
            if(mpp[nums[i]] > 1){
                return true;
            }
        }
        int r = k+1;
        int l = 0;
        while(r < nums.size()){
            mpp[nums[l]]--;
          
            if(mpp[nums[l]]==0){
                mpp.erase(nums[l]);
            }
              l++;
            mpp[nums[r]]++;
            if(mpp[nums[r]] > 1){
                return true;
            }
            r++;

        } 
        return false;
    }
};