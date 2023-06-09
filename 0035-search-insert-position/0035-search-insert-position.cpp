class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int start=0;
        int end=nums.size()-1;
        int posi=-1;
        int mid;
        while(start<=end){
            mid=(start+end)/2;
            if(nums[mid]==target){
                return mid;
            }
            if(nums[mid]>target){
                end=mid-1;
                posi=mid;
            }
            else{
                start=mid+1;
                posi=mid+1;
            }
        }
        return posi;
    }
};