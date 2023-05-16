class Solution {
public:
    vector<int> dup(vector<int>& vect){
        sort(vect.begin(),vect.end());
        int x=vect.size();
        int i=1;
        while(i<x){
            if(vect[i]==vect[i-1]){
                vect.erase(vect.begin()+i);
                x-=1;
            }
            else{
                i+=1;
            }
        }
        return vect;
    }
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int> ar;
        int x=nums.size();
        nums=dup(nums);
        int t=*max_element(nums.begin(),nums.end());
        int z=0;
        for(int i=1;i<=t;i++){
            if(z>nums.size()){
                break;
            }
            if(nums[z]!=i){
                ar.push_back(i);
            }
            else{
                z+=1;
            }
        }
        for(int i=t+1;i<=x;i++){
            ar.push_back(i);
            
        }
        return ar;
    }
};