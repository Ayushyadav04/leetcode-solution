class Solution {
public:
    int countPairs(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int sol=0;
        int i=0;
        int j=nums.size()-1;
        while(i<j){
            int ans=nums[i]+nums[j];
            if(ans>=target){
                j--;
            }
            else{
                sol+=j-i;
                i++;
            }
        }
        return sol;
    }
};