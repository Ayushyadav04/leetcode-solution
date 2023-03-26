class Solution {
public:
    int strStr(string haystack, string needle) {
        int n=haystack.length();
        int m=needle.length();
        int j=-1;
        for(auto i=0;i<=n-m;i++){
            if(needle==haystack.substr(i,m)){
                j=i;
                break;
            }
        }
        return j;
    }
};