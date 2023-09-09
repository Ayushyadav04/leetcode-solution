class Solution {
public:
    int combinationSum4(vector<int>& nums, int target) {
        vector<unsigned int> v(target+1,0);
        v[0]=1;
        for(int i=1;i<=target;i++){
            for(auto j:nums){
                if(i>=j){
                    v[i]+=v[i-j];
                }
            }
        }
        return v[target];
    }
};