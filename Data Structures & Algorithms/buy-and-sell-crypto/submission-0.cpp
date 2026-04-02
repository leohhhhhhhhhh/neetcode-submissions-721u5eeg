class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int l = 0, r = 1, max = 0;
        while(r < prices.size()){
            if(prices[l] < prices[r]){
                int earn = prices[r] - prices[l];
                if(earn >= max) max = earn;
            }
            else l = r;
            r++;
        }
        return max;
    }
};
