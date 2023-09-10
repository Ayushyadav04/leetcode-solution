class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
        // unordered_map<int,int> mapp;
        // int count=0;
        // for(auto i:edges){
        //     if(mapp.find(i[0])==mapp.end()){
        //         mapp[i[0]]=1;
        //         count++;
        //     }
        //     else{
        //         mapp[i[0]]++;
        //     }
        //     if(mapp.find(i[1])==mapp.end()){
        //         mapp[i[1]]=1;
        //         count++;
        //     }
        //     else{
        //         mapp[i[1]]++;
        //     }
        // }
        // for(auto i=mapp.begin();i!=mapp.end();i++){
        //     if(i->second==count-1){
        //         return i->first;
        //     }
        // }
        // return -1;
        int n=edges.size();
        vector<int> v(n+2,0);
        for(auto i:edges){
            v[i[0]]++;
            v[i[1]]++;
        }
        for(int i=0;i<v.size();i++){
            if(v[i]==n){
                return i;
            }
        }
        return -1;
    }
};