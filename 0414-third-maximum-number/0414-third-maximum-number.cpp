class Solution {
public:
    vector<int> dup(vector<int>& vect){      // To delete duplicate from vector
        int x=vect.size();
        int i=1;
        sort(vect.begin(),vect.end());
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
    int thirdMax(vector<int>& nums) {
        nums=dup(nums);
        int z=nums.size();
        if(z<3){
            return *max_element(nums.begin(),nums.end());
        }
        return nums[z-3];
        
    }
};