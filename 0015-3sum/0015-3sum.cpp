class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        set<vector<int>> asn;
        vector<vector<int>> v;
        vector<int> temp;
        for(int i=0;i<nums.size()-2;i++){
            int j=i+1;
            int k=nums.size()-1;
            while(j<k){
                int ans=nums[i]+nums[j]+nums[k];
                if(ans==0){
                    temp.push_back(nums[i]);
                    temp.push_back(nums[j]);
                    temp.push_back(nums[k]);
                    asn.insert(temp);
                    temp.clear();
                    k--;
                }
                else if(ans>0){
                    k--;
                }
                else if(ans<0){
                    j++;
                }
            }
        }
        for(auto i:asn){
            v.push_back(i);
        }
        return v;
    }
};