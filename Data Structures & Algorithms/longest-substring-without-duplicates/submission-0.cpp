class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> ans;
        int l = 0, num = 0;
        for(int r = 0 ; r<s.size() ; r++){
            while(ans.find(s[r]) != ans.end()){
                ans.erase(s[l]);
                l++;
            }
            ans.insert(s[r]);
            num = max(num, r - l + 1);
        }
        return num;
    }
};
