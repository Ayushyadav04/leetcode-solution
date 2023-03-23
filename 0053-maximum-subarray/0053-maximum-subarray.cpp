class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int a=INT_MIN;
        int b=0;
        for(auto i=0;i<nums.size();i++){
            b+=nums.at(i);
            if(a<b){
                a=b;
            }
            if(b<0){
                b=0;
            }
        }
        return a;
    }
};