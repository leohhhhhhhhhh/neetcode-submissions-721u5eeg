class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        stack<double> tmp;//用來表達車隊隊長們
        int len = position.size();
        vector<pair<int, int>> car(len);
        for(int i=0;i<len;i++){
            car[i] = {position[i], speed[i]};
        }
        sort(car.rbegin(), car.rend());
        for(int i=0;i<car.size();i++){
            double a = (double)(target - car[i].first)/car[i].second;
            if(tmp.empty() || tmp.top() < a){
                tmp.push(a);
            }
        }
        return tmp.size();
    }
};
