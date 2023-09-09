class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char,int> mapp;
        string s1="";
        for(int i=0;i<s.length();i++){
            if(mapp.find(s[i])==mapp.end()){
                mapp[s[i]]=1;
                s1+=s[i];
            }
            else{
                mapp[s[i]]+=1;
            }
        }
        int ans=0;
        bool chh=false;
        for(int i=0;i<s1.length();i++){
            ans+=mapp[s1[i]]/2;
            if(mapp[s1[i]]%2!=0){
                chh=true;
            }
        }
        if(chh){
            return 2*ans+1;
        }
        return 2*ans;
    }
};