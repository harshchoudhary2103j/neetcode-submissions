class Solution {
public:
    bool isAnagram(string s, string t) {
        int size1 = s.size();
        int size2 = t.size();
        if(size1 != size2){
            return false;
        }
        vector<int>freq(26,0);
        for(int i = 0; i < size1; i++){
            char ch = s[i];
            freq[ch-'a']+=1;
        }
        for(int i = 0; i < size2; i++){
            char ch = t[i];
            freq[ch-'a']-=1;
        }
        for(int i = 0; i < 26; i++){
            if(freq[i] != 0){
                return false;
            }
        }
        return true;
    }
};
