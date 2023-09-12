class Solution {
public:
    unordered_map<int ,char> mapp;
    int fill(int count,char s){
        int ans=0;
        if(count==0){
            mapp[count]=s;
        }
        else if(mapp.find(count)==mapp.end()){
            mapp[count]=s;
        }
        else{
            ans++;
            ans+=fill(count-1,s);
        }
        return ans;
    }
    int minDeletions(string s) {
        int ans=0;
        sort(s.begin(),s.end());
        int count=1;
        int i=1;
        while(i<s.length()){
            if(s[i]!=s[i-1]){
                ans+=fill(count,s[i-1]);
                count=1;
            }
            else{
                count++;
            }
            i++;
        }
        ans+=fill(count,s[s.length()-1]);
        return ans;
    }
};