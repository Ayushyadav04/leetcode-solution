class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count=0;
        int ans=INT_MIN;
        for(auto i:nums){
            if(i==1){
                count++;
            }
            else{
                ans=max(count,ans);
                count=0;
            }
        }
        return max(count,ans);
    }
};