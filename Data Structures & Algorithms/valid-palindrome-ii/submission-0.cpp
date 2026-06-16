class Solution {
public:
    bool isPalin(string s){
        int l = 0; 
        int r = s.size()-1;
        while(l < r){
            if(s[l]!=s[r]){
                return false;
            }
            l++;
            r--;
        }
        return true;
    }
    bool validPalindrome(string s) {
        int n = s.size();
        int i  = 0;
        int j = n-1;
        while(i < j){
            if(s[i]!=s[j]){
                return isPalin(s.substr(0,i)+s.substr(i+1))||
                isPalin(s.substr(0,j)+s.substr(j+1));
            }
            i++;
            j--;
        }
        return true;
        
    }
};