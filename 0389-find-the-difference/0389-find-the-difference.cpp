class Solution {
public:
    char findTheDifference(string s, string t) {
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        s+='0';
        char req;
        for(int i=0;i<s.size();i++){
            if(s[i]!=t[i]){
                req=t[i];
                break;
            }
        }
        return req;
    }
};