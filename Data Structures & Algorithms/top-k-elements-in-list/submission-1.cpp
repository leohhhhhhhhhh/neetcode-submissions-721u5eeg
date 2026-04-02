class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        unordered_map<int, int> count;
        for(int num:nums)
            count[num]++;
        vector<pair<int, int>> tmp;
        for(auto it:count)
            tmp.push_back({it.second, it.first});
        sort(tmp.begin(), tmp.end(), [](pair<int, int>a, pair<int, int>b)
        {return a.first>b.first;});
        vector<int> ans;
        auto it = tmp.begin();
        for(int i=0;i<k;i++){
            ans.push_back(it->second);
            it++;
        }
            
        return ans;


    }
};
