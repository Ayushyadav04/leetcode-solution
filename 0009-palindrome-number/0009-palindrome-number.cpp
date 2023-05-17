class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0){
            return false;
        }
        else{
            int z=x;
            long int i=0;
            while(x>0){
                i*=10;
                i+=(x%10);
                x=x/10;
            }
            if(z!=i){
                return false;
            }
        }
        return true;
    }
};