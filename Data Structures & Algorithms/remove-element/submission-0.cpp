class Solution {
   public:
    int removeElement(vector<int>& nums, int val) {
        int n = nums.size();
        if (n == 0) return 0;
        int i = 0;
        int j = n - 1;
        while (j >= 0 && nums[j] == val) {
            j--;
        }
        while (i < j) {
            if (nums[i] == val) {
                swap(nums[i], nums[j]);
                i++;
                j--;
                while (j > i && nums[j] == val) {
                    j--;
                }
            }else{
                i++;
            }
        }
        return j + 1;
    }
};