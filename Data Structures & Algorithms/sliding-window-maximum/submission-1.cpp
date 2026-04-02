class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        vector<int> ans;
        int size = nums.size()-k;
        for(int i = 0; i<=size;i++){
            int maxx = nums[i];
            int kk = k;
            int j = i;
            while(kk--){
                if(nums[j] > maxx) maxx = nums[j];
                j++;
            }
            ans.push_back(maxx);
        }
        return ans;
    }
};
