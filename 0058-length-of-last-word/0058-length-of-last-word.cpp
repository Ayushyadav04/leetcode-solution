class Solution {
public:
    bool check(string s){
        for(int i=0;i<s.length();i++){
            if(s[i]==' '){
                return false;
            }
        }
        return true;
    }
    int lengthOfLastWord(string s) {
        if(check(s)){
            return s.length();
        }
        stack<char> s1;
        string ans;
        for(int i=0;i<s.length();i++){
            s1.push(s[i]);
        }
        for(int i=0;i<s1.size();i++){
            if(s1.top()==' '){
                s1.pop();
            }
        }
        while(!s1.empty()){
            if(s1.top()!=' '){
                ans+=s1.top();
                s1.pop();
            }
            else{
                break;
            }
        }
        return ans.length();
    }
};