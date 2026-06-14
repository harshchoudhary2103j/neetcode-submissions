class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int e1 = 0, e2 = 0;
        int cnt1 = 0, cnt2 = 0;

        for (int num : nums) {
            if (num == e1) {
                cnt1++;
            }
            else if (num == e2) {
                cnt2++;
            }
            else if (cnt1 == 0) {
                e1 = num;
                cnt1 = 1;
            }
            else if (cnt2 == 0) {
                e2 = num;
                cnt2 = 1;
            }
            else {
                cnt1--;
                cnt2--;
            }
        }

        cnt1 = cnt2 = 0;

        for (int num : nums) {
            if (num == e1)
                cnt1++;
            else if (num == e2)
                cnt2++;
        }

        vector<int> res;

        if (cnt1 > nums.size() / 3)
            res.push_back(e1);

        if (cnt2 > nums.size() / 3)
            res.push_back(e2);

        return res;
    }
};