class Solution {
public:
    int maxArea(vector<int>& heights) {
        int n = heights.size();
        int i = 0;
        int j = n-1;
        int max_area = INT_MIN;
        while(i < j){
            int h1 = min(heights[i],heights[j]);
            int dist = j-i;
            int curr_area = h1*dist;
            max_area = max(max_area, curr_area);
            if(heights[i] < heights[j]){
                i++;
            }else if(heights[i] > heights[j]){
                j--;
            }else{
                i++;
                j--;
            }

        }
        return max_area;
        
    }
};
