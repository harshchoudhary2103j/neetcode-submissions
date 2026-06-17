class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.size();
        int l = 0;
        int r = 0;
        int max_len = 0;
        unordered_map<char, int>mpp;
        while(r < n){
            mpp[s[r]]++;
            while(mpp[s[r]] > 1){
                mpp[s[l]]--;
                if(mpp[s[l]]==0){
                    mpp.erase(s[l]);
                }
                l++;
            }
            max_len = max(max_len, r-l+1);
            r++;


        }
        return max_len;
        
    }
};
