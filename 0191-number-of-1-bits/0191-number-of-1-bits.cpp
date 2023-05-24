class Solution {
public:
    int hammingWeight(uint32_t n) {
        int bits=0;
        for(int i=0;n>0;i++)    {    
            if(n%2==1){
                bits++;
            }    
            n= n/2;  
        } 
        return bits;
    }
};