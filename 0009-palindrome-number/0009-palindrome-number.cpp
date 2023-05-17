class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0){
            return false;
        }
        else{
            string z=to_string(x);
            int i=0;
            int j=z.size()-1;
            while(i<=j){
                if(z[i]!=z[j]){
                    return false;
                }
                i++;j--;
            }
        }
        return true;
    }
};