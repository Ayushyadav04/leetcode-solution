class Solution {
public:
    int addi(int n){
        int x=0;
        while(n>0){
            x+=n%10;
            n=n/10;
        }
        return x;
    }
    int addDigits(int num) {
        while(num>=10){
            num=addi(num);
        }
        return num;
    }
};