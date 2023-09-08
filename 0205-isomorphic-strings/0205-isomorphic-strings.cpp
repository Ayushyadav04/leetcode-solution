class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char,char> mapp;
        unordered_map<char,char> mapp1;
        for(int i=0;i<s.length();i++){
            if(mapp.find(s[i])==mapp.end() && mapp1.find(t[i])==mapp1.end()){
                mapp[s[i]]=t[i];
                mapp1[t[i]]=s[i];
            }
            else{
                if(mapp[s[i]]!=t[i] || mapp1[t[i]]!=s[i]){
                    return false;
                }
            }
        }
        return true;
    }
};