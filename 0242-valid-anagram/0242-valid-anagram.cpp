class Solution {
public:
    bool isAnagram(string s, string t) {
        bool flag=true;
        char s1[s.size()+1];
        char t1[t.size()+1];
        strcpy(s1,s.c_str());
        strcpy(t1,t.c_str());
        sort(s1,s1+strlen(s1));
        sort(t1,t1+strlen(t1));
        if(strlen(s1)!=strlen(t1)){
            flag=false;
        }
        else{
            for(auto i=0;i<strlen(s1);i++){
                if(s1[i]!=t1[i]){
                    flag=false;
                }
            }
        }
        return flag;
    }
};