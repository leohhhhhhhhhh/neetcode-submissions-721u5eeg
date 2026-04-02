class Solution {
public:
    int characterReplacement(string s, int k) {
        int l = 0;
        int sum = 0, maxs = 0;
        unordered_set<char> c(s.begin(), s.end());
        for(char cc:c){
            l = 0, sum = 0;
            for(int r=0 ; r<s.size() ; r++){
                if(s[r] == cc) sum++;
                while((r-l+1) - sum > k){
                    if(s[l] == cc)sum--;
                    l++;
                }
                maxs = max(maxs, r-l+1);
            }
        }
        return maxs;
    }
};
