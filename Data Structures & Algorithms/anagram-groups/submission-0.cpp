class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        if (strs.empty())
            return {};
        else if(strs.size() == 1)
            return {strs};
        else{
            vector<string> copy = strs;
            unordered_map<string, vector<string>> tmp;
            for(int i=0;i<copy.size();i++){
                sort(copy[i].begin(), copy[i].end());
                tmp[copy[i]].push_back(strs[i]);
            }
            vector<vector<string>> ans;
            for(auto &p:tmp){
                ans.push_back(p.second);
            }
            return ans;
        }
    }
};

