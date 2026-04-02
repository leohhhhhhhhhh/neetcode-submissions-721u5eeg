class Solution {
public:
    int trap(vector<int>& height) {
        int l = 0;
        int r = height.size()-1;
        int l_max = 0, r_max = 0;
        int store = 0;
        while(l < r){
            if(height[l]<height[r]){
                if((l_max - height[l]) >= 0){
                    store += (l_max-height[l]);
                }
                else{
                    l_max = height[l];
                }
                l++;
            }
            else{
                if((r_max - height[r]) >= 0){
                    store += (r_max-height[r]);
                }
                else{
                    r_max = height[r];
                }
                r--;
            }
        }
        return store;
    }
};
