class Solution {
public:
    static int x;
    int climbStairs(int n) {
        if(n==1){
            return 1;
        }
        int pre=1;
        int curr=2;
        int temp;
        int i=3;
        while(i<=n){
            temp=pre+curr;
            pre=curr;
            curr=temp;
            i++;
        }
        return curr;
    }
    
};