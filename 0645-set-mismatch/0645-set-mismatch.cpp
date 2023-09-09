class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        vector<int> v(nums.size()+1,0);
        vector<int> ans;
        for(int i=0;i<nums.size();i++){
            v[nums[i]]+=1;
        }
        for(int i=1;i<=nums.size();i++){
            if(v[i]>1){
                ans.push_back(i);
            }
        }
        for(int i=1;i<=nums.size();i++){
            if(v[i]==0){
                ans.push_back(i);
            }
        }
        return ans;
    }
};