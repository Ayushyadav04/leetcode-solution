class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n=nums.size();
        int i=2;
        while(i<n){
            if(nums[i]==nums[i-2]){
                nums.erase(nums.begin()+i);
                n--;
            }
            else{
                i++;
            }
        }
        return n;
    }
};