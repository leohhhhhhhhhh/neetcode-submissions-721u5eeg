class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> ans;
        for(int i=0;i<tokens.size();i++){
            if(tokens[i] == "+" || tokens[i] == "-" || tokens[i] == "/" || tokens[i] == "*"){
                int a = ans.top();
                ans.pop();
                int b = ans.top();
                ans.pop();
                if(tokens[i] == "+") ans.push(b+a);
                else if(tokens[i] == "-") ans.push(b-a);
                else if(tokens[i] == "*") ans.push(b*a);
                else ans.push(b/a);
            }
            else ans.push(stoi(tokens[i]));
        }
        return ans.top();
    }
};
