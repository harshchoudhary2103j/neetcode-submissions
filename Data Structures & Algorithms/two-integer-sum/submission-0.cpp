class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        unordered_map<int,int>ele_to_idx;
        for(int i = 0; i < n; i++){
            ele_to_idx[nums[i]] = i;
        }
        for(int i = 0; i < n; i++){
            int diff = target-nums[i];
            if(ele_to_idx.count(diff) && ele_to_idx[diff]!=i){
                return {i, ele_to_idx[diff]};
            }
        }
        return {};
    }
};
