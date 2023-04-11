class Solution {
public:
    int findMin(vector<int>& nums) {
        int n=nums.size();
        int m=nums[0];
        int count;
        for(int i=1;i<n;i++){
            if(m>nums[i]){
                count=i;
                break;
            }
        }
        if(count==n){
            count=0;
        }
        return nums[count];
    }
};