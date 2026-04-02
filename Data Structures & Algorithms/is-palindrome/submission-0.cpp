class Solution {
public:
    bool isPalindrome(string s) {
        vector<char> ans;
        transform(s.begin(), s.end(), s.begin(), ::tolower);
        for(int i=0;i<s.size();i++){
            if(!(isdigit(s[i])) && !(isalpha(s[i]))) continue;
            ans.push_back(s[i]);
        }
        for(int i=0, j=ans.size()-1;i<=j;i++,j--){
            
            if(ans[i]!=ans[j]) return false;
            continue;
        }
        return true;
    }
};
