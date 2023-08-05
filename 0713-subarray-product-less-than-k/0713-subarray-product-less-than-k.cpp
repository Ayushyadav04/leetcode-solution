class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        if(k==0){
            return 0;
        }
        int count=0;
        int x=1;
        int t=0;
        for(int i=0;i<nums.size();i++){
            x*=nums[i];
            while(x>=k && t<=i){
                x=x/nums[t];
                t++;
            }
            count+=i-t+1;
        }
        return count;
    }
};