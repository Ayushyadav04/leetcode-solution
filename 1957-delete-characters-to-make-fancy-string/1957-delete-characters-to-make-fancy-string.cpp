class Solution {
public:
    string makeFancyString(string s) {
        string t=s.substr(0,2);
        for(int i=2;i<s.length();i++){
            if(s[i]!=s[i-1] || s[i-1]!=s[i-2]){
                t+=s[i];
            }
        }
        return t;
    }
};