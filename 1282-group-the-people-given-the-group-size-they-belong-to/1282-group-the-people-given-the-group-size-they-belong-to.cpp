class Solution {
public:
    vector<vector<int>> groupThePeople(vector<int>& groupSizes) {
        unordered_map<int,vector<int>> mapp;
        vector<vector<int>> ans;
        for(int i=0;i<groupSizes.size();i++){
            int size=groupSizes[i];
            mapp[size].push_back(i);
            if(mapp[size].size()==size){
                ans.push_back(mapp[size]);
                mapp[size].clear();
            }
        }
        return ans;
    }
};