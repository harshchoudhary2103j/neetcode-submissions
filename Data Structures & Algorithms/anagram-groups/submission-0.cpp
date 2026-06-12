class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<string,vector<string>>mpp;
        int n = strs.size();
        for(int i = 0; i < n; i++){
            string curr_str = strs[i];
            sort(curr_str.begin(),curr_str.end());
            mpp[curr_str].push_back(strs[i]);
        }
        vector<vector<string>>ans;
        for(auto it:mpp){
            ans.push_back(it.second);
        }
        return ans;
    }
};
