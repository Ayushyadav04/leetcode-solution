class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target){
        int a,b;
        for(auto i=0;i<nums.size()-1;i++){
            for(auto j=i+1;j<nums.size();j++){
                if((nums.at(i)+nums.at(j))==target){
                    a=i;
                    b=j;
                }
            }
        }
        return {a,b};
    }
};