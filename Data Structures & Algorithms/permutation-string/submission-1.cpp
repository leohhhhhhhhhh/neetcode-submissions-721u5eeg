class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int n = s1.size(), m = s2.size();
        if(n > m)
            return false;
        vector<int> count1(26, 0), count2(26, 0);
        //第一個window
        for(int i=0;i<n;i++){
            count1[s1[i] - 'a']++;
            count2[s2[i] - 'a']++;
        }
        //用視窗的右端來看
        for(int i=n;i<m;i++){
            if(count1 == count2){
                return true;
            }
            count2[s2[i] - 'a']++; //新增右端的
            count2[s2[i-n] - 'a']--; //剪掉左端的
        }
        if(count1==count2) return true; // 最後一段視窗
        return false;
    }
};
