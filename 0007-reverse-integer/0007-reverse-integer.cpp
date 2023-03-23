class Solution {
public:
    int reverse(int x) {
        long long int n=0,rev=0;
        if(x<0){
            cout<<"-";
        }
        while(x!=0){
            n=x%10;
            x=x/10;
            rev=rev*10+n;
        }
        if(rev<INT_MIN || rev>INT_MAX){
            return 0;
        }
        else{
            return rev;
        }
    }
};