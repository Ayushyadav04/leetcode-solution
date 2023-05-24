class Solution {
public:
    bool isThree(int n) {
        int middle=0;
        for(int i=2;i<n;i++){
            if(n%i==0){
                middle++;
            }
            if(middle>1){
                return false;
            }
        }
        if(middle==0){
            return false;
        }
        return true;
    }
};