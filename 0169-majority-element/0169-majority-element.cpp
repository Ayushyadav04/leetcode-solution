class Solution {
public:
    int majorityElement(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int z;
        for(int i=0;i<nums.size()/2;i++){
            if(nums[i]==nums[nums.size()/2]){
                z=i;
                break;
            }
        }
        return nums[z];
    }
};