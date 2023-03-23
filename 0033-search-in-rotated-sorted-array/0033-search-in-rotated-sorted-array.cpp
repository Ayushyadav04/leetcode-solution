class Solution {
public:
    int search(vector<int>& nums, int target) {
        int l=0;
        int h=nums.size()-1;
        while(l<=h){
            if(l>h){
                return -1;
            }
    
            int mid=(l+h)/2;
            if(nums.at(mid)==target){
                return mid;
            }
    
            if(nums.at(l)<=nums.at(mid)){
                if(target<nums.at(mid) && target>=nums.at(l)){
                    h=mid-1;
                }
                else{
                    l=mid+1;
                }
            }
            else{
                if(target>nums[mid] && target<=nums[h]){
                    l=mid+1;
                }
                else{
                    h=mid-1;
                }
            }
        }
        return -1;
    }
};