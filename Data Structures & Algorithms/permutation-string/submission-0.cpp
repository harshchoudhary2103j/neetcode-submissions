class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int k = s1.size();
        string temp = s1;
        sort(temp.begin(), temp.end());
        for(int i = 0; i < s2.size(); i++){
            string temp2 = s2.substr(i,k);
            cout<<temp2<< endl;
            sort(temp2.begin(), temp2.end());
            if(temp2 == temp){
                return true;
            }
        }
        return false;
        
    }
};
