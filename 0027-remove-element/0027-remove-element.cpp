class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int t=nums.size();
        for(auto i=0;i<t;i++){
            if(nums[i]==val){
                nums.erase(nums.begin()+i);
                t--;
                i--;
            }
        }
        return nums.size();
    }
};