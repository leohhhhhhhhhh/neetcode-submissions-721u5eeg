class Solution {
public:
    int maxArea(vector<int>& heights) {
        int j = heights.size()-1;
        int i = 0;
        int max_area = 0;
        int now = 0;
        while(i < j){
            if(heights[i] < heights[j]){
                now = (j-i)*heights[i];
                i++;
            }
            else{
                now = (j-i)*heights[j];
                j--;
            }
            
            if(now > max_area){
                max_area = now;
            }
        }
        return max_area;
    }
};
