class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        int n = people.size();
        sort(people.begin(), people.end());
        int ans = 0;
        int i = 0;
        int j = n-1;
        while(i<=j){
            int rem = limit-people[j];
            j--;
            ans++;
            if(i<=j && people[i] <= rem){
                i++;
            }
        }
        return ans;
        
    }
};