class Solution {
public:

    string encode(vector<string>& strs) {
        string encoding = {};
        for(int i=0;i<strs.size();i++){
            int length = strs[i].size();
            encoding += (to_string(length)+"."+strs[i]);
        }
        return encoding;
    }
    vector<string> decode(string s) {
        vector<string> ans;
        int count = 0;
        string len = {};
        string s_ans = {};
        for(int i=0;i<s.size();){
            for(int j=i;s[j]!='.';j++){
                len += s[j];
            }
            count = stoi(len);
            i+=len.size()+1;
            for(int j=0;j<count;j++){
                s_ans+=s[i];
                i++;
            }
            ans.push_back(s_ans);
            s_ans={};
            len = {};
        }
        return ans;
    }
};
