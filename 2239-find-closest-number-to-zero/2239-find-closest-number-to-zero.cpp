class Solution {
public:
    int findClosestNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        for(int i=1;i<nums.size();i++){
            if(nums[i]>0 && nums[i-1]<0){
                if(0-nums[i-1]<nums[i]){
                    return nums[i-1];
                }
                else{
                    return nums[i];
                }
            }
            else if(nums[0]>=0){
                return nums[0];
            }
            else if(nums[nums.size()-1]<=0){
                return nums[nums.size()-1];
            }
        }
        return 0;
    }
};