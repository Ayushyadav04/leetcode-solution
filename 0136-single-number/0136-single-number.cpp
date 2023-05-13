class Solution {
public:
    int singleNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int index;
        if(nums.size()==1){
            index=0;
        }
        else{
            for(int i=0;i<nums.size();i+=2){
                if(nums[i]!=nums[i+1]){
                    index=i;
                    break;
                }
            }
        }
        return nums[index];
    }
};