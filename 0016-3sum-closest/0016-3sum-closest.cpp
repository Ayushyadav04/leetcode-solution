class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int ans=nums[0]+nums[1]+nums[2];
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size()-2;i++){
            int j=i+1;
            int k=nums.size()-1;
            while(j<k){
                int temp=nums[i]+nums[j]+nums[k];
                int dif=abs(target-temp);
                if(temp==target){
                    cout<<temp<<endl;
                    return temp;
                }
                else if(dif<abs(ans-target)){
                    ans=temp;
                }
                else if(target>temp){
                    ans=temp;
                    j++;
                }
                else{
                    k--;
                }
            }
        }
        return ans;
    }
};