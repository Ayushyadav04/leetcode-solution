class Solution {
public:
    int onee(int x){
        int ans=0;
        while(x>=1){
            if(x%2==1){
                ans+=1;
            }
            x=x/2;
        }
        return ans;
    }
    vector<int> countBits(int n) {
        vector<int> v(n+1);
        // for(int i=0;i<=n;i++){
        //     v.push_back(onee(i));
        // }
        for(int i=1;i<=n;i++){
            v[i]=v[i/2]+i%2;
        }
        return v;
    }
};