class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int,int> mapp;
        for(auto i=0;i<nums.size();i++){
            if(mapp.find(nums[i])==mapp.end()){
                mapp[nums[i]]=i;
            }
            else{
                if(abs(i-mapp[nums[i]])<=k){
                    return true;
                }
                mapp[nums[i]]=i;
            }
        }
        return false;
    }
};