class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int> memory;
        for(int num:nums){
            if(memory.count(num)){
                return true;
            }
            memory.insert(num);
        }
        return false;
    }
};
//unordered_set裡面元素不能重複 所以可以用count