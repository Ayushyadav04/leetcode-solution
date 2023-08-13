class Solution {
public:
    int titleToNumber(string columnTitle) {
        int x=columnTitle.length();
        int z=0;
        for(int i=0;i<x;i++){
            z+=(columnTitle[i]-64)*pow(26,x-i-1);
        }
        return z;
    }
};