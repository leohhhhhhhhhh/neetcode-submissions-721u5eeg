class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<pair<int, int>> tmp;
        for(int i=0;i<nums.size();i++)
            tmp.push_back({nums[i], i});
        sort(tmp.begin(), tmp.end());
        int i=0, j=nums.size()-1;
        while(i<j){
            int cur = tmp[i].first+tmp[j].first;
            if(cur == target)
                return {
                    min(tmp[i].second, tmp[j].second), max(tmp[i].second, tmp[j].second)
                };
            else if(cur < target)
                i++;
            else
                j--;
        }
        return {};
    }
};
