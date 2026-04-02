class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int i=0;
        vector<vector<int>> ans;
        sort(nums.begin(), nums.end());
        while(i<nums.size()){
            if(nums[i] > 0) break;
            if(i>0 && nums[i] == nums[i-1]){
                i++;
                continue;
            } 
            
            int j=i+1, k=nums.size()-1;
            while(j<k){
                int sum = nums[i]+nums[k]+nums[j];
                if(sum<0) j++;
                else if(sum>0) k--;
                else{
                    ans.push_back({nums[i], nums[j], nums[k]});
                    j++;k--;
                    while(j<k && nums[j] == nums[j-1])
                        j++;
                    while (j < k && nums[k] == nums[k+1]) 
                        k--;
                }
            }
            i++;
        }
        return ans;
    }
};
