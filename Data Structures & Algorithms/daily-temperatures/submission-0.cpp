class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        vector<int> ans(temperatures.size(), 0);
        stack<pair<int, int>> tmp;
        for(int i=0;i<temperatures.size();i++){
            int t = temperatures[i];
            while(!tmp.empty() && tmp.top().first<t){
                int day = i - tmp.top().second;
                ans[tmp.top().second] = day;
                tmp.pop();
            }
            tmp.push({t, i});
        }
        return ans;
    }
};
