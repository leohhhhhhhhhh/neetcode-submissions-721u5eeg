class Solution {
public:
    int search(vector<int>& nums, int target) {
        int l = 0, r = nums.size();
        while(l < r){
            int mid = (l + (r-1))/2;
            if(nums[mid] > target){
                r = mid;
            }
            else{
                l = mid+1;
            }
        }
        if(l>0 && nums[l-1]==target)
            return l-1;
        else
            return -1;
    }
};
