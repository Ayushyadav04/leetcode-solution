class Solution {
public:
    int largestPerimeter(vector<int>& nums) {
        int peri=0;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size()-2;i++){
            if(nums[i]+nums[i+1]>nums[i+2] && nums[i]+nums[i+1]+nums[i+2]>peri){
                peri=nums[i]+nums[i+1]+nums[i+2];
            }
        }
        return peri;
    }
};