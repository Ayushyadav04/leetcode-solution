class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end());
        stack<vector<int>> v;
        vector<vector<int>> v1;
        v.push(intervals[0]);
        for(auto i:intervals){
            vector<int> temp=v.top();
            if(i[0]>=temp[0] && i[0]<=temp[1] && i[1]>=temp[1]){
                v.pop();
                temp[1]=i[1];
                v.push(temp);
            }
            else if(i[0]>=temp[0] && i[1]<=temp[1]){
                v.pop();
                v.push(temp);
            }
            else{
                v.push(i);
            }
        }
        while(!v.empty()){
            v1.push_back(v.top());
            v.pop();
        }
        return v1;
    }
};