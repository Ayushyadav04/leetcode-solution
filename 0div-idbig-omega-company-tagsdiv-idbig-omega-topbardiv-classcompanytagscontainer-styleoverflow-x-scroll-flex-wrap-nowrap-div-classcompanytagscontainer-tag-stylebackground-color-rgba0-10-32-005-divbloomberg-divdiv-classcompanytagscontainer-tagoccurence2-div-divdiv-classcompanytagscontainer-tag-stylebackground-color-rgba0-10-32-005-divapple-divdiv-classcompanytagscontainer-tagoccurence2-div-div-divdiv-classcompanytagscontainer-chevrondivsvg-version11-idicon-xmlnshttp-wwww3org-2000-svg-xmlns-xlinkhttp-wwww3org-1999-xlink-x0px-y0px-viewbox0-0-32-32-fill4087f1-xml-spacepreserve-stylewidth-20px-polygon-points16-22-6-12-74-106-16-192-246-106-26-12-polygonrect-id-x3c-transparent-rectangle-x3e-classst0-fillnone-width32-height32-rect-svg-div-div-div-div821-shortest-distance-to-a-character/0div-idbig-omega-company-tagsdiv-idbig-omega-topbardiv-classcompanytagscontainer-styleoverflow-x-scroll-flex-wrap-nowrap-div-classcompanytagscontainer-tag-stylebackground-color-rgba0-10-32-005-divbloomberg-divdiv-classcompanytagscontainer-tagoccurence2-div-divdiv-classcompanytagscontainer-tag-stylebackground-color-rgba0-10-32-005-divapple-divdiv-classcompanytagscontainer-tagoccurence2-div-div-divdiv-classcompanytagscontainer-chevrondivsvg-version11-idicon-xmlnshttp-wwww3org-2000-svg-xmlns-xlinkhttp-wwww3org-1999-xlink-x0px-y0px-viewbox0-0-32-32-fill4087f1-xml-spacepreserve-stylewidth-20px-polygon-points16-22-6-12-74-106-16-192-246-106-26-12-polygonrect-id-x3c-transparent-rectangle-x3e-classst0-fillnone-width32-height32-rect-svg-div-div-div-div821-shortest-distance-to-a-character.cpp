class Solution {
public:
    vector<int> shortestToChar(string s, char c) {
        vector<int> v;
        for(int i=0;i<s.length();i++){
            int l=INT_MAX;int r=INT_MAX;
            for(int j=i;j<s.length();j++){
                if(s[j]==c){
                    l=abs(i-j);
                    break;
                }
            }
            for(int j=i;j>=0;j--){
                if(s[j]==c){
                    r=abs(i-j);
                    break;
                }
            }
            v.push_back(min(l,r));
        }
        return v;
    }
};