class Solution {
public:
    bool isValid(string s) {
        stack<char> ss;
        ss.push(s[0]);
        for(int i=1;i<s.length();i++){
            if(!ss.empty() && ss.top()=='(' && s[i]==')'){
                ss.pop();
            }
            else if(!ss.empty() && ss.top()=='{' && s[i]=='}'){
                ss.pop();
            }
            else if(!ss.empty() && ss.top()=='[' && s[i]==']'){
                ss.pop();
            }
            else{
                ss.push(s[i]);
            }
        }
        return ss.empty();
    }
};