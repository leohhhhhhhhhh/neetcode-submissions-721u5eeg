class Solution {
public:
    string minWindow(string s, string t) {
        unordered_map<char, int  > test, window;
        int n = s.size(), m = t.size();
        int min = INT_MAX;

        if(n<m) return "";
        for(int i = 0;i<m;i++){
            test[t[i]]++;
        }
        int total_need = test.size();
        int have = 0;
        int l = 0;
        int start = 0;
        for(int r = 0;r<n;r++){
            if(test.count(s[r])){
                window[s[r]]++;
                if(test[s[r]] == window[s[r]]){
                    have++;
                }
            }
            while(have == total_need){
                if(r-l+1<min){
                    min = r-l+1;
                    start = l;
                }
                if(test.count(s[l])){
                    if(window[s[l]] == test[s[l]])
                        have--;
                }window[s[l]]--;
                l++;
            }
        }
        if(min == INT_MAX) return "";
        return s.substr(start, min);
    }
};
