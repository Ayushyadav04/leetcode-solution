class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int t=digits.size();
        digits[t-1]+=1;
        int x=digits[t-1];
        while(x>=10 && t>0){
            digits[t-1]=0;
            t--;
            if(t>0){
                x=digits[t-1]+1;
                digits[t-1]+=1;
            }
            else if(t==0 && digits[0]==0){
                digits.insert(digits.begin(),1);
            }
        }
        // digits[t-1]+=1;
        return digits;
    }
};