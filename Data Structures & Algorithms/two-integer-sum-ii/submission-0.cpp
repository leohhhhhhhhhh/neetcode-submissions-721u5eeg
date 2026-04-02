class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int i=0, j=numbers.size()-1;
        while(i<j){
            int cursum = numbers[i]+numbers[j];
            if(cursum < target){
                i++;
            }
            else if(cursum > target){
                j--;
            }
            else{
                return {i+1, j+1};
            }
        }
        return {};
    }
};
