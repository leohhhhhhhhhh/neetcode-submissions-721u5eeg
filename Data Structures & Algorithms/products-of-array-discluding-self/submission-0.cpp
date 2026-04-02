class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> front(n);
        vector<int> back(n);
        vector<int> ans(n);
        front[0] = 1;
        back[n-1] = 1;
        for(int i=1;i<n;i++){
            front[i] = nums[i-1] * front[i-1];
        }
        for(int i=(n-2);i>=0;i--){
            back[i] = nums[i+1]  * back[i+1];
        }
        for(int i=0;i<n;i++){
            ans[i] = front[i]*back[i];
        }
        return ans;
    }
};
