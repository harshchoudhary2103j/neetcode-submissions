class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int,int>mpp;
        for(int i: nums){
            mpp[i]++;
        }
        int curr_ele = 0;
        while(true){
            int next_ele = curr_ele+1;
            if(mpp.find(next_ele)==mpp.end()){
                return next_ele;
            } else{
                curr_ele = next_ele;
            }
        }
        return -1;
        

        
    }
};