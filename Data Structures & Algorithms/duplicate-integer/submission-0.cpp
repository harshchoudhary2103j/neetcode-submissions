class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        //Variable to store the size of nums array
        int n = nums.size();
        //A map to store the frequency of numbers
        unordered_map<int,int>mpp;
        //Logic
        for(int i = 0; i < n; i++){
            //if number is already present and we are adding that means dublicate
            if(mpp.find(nums[i])!=mpp.end()){
                return true;
            }else{
                mpp[nums[i]]++;
            }
        }
        //no element appear more than once hence we return false.
        return false;
    }
};