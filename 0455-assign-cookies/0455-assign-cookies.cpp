class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(g.begin(),g.end());
        sort(s.begin(),s.end());
        int g1=g.size()-1;
        int s1=s.size()-1;
        int x=0;
        while(g1>=0 && s1>=0){
            if(s[s1]>=g[g1]){
                x+=1;
                s1--;
            }
            g1--;
        }
        return x;
    }
};