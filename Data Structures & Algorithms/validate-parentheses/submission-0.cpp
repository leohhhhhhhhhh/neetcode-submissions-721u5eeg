class Solution {
public:
    bool isValid(string s) {
        stack<char> stack_s;
        unordered_map<char, char> fully={
            {')', '('}, {']','['}, {'}', '{'}
        };
        for (char c:s){
            if(fully.count(c)){
                if(!stack_s.empty() && stack_s.top() == fully[c]){
                    stack_s.pop();
                }
                else{
                    return false;
                }
            }
            else{
                stack_s.push(c);
            }
        }
        return stack_s.empty();
    }
};
