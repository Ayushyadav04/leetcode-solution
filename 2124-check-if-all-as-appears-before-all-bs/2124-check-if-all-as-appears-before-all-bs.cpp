class Solution {
public:
    int fun(string t, char s){
        for(int i=0;i<t.length();i++){
            if(t[i]!=s){
                return 1;
            }
        }
        return 0;
    }
    bool checkString(string s) {
        if(fun(s,'a')==0 || fun(s,'b')==0){
            return true;
        }
        for(int i=0;i<s.length()-1;i++){
            if(s[i]=='a' && s[i+1]=='b'){
                if(fun(s.substr(0,i),'a')==0 && fun(s.substr(i+1),'b')==0){
                    return true;
                }
            }
        }
        return false;
    }
};