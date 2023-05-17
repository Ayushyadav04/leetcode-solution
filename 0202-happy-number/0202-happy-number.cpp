class Solution {
public:
    int add_digit(int x){
        int i=0;
        while(x>0){
            i+=(x%10)*(x%10);
            x=x/10;
        }
        return i;
    }
    int search(int x,vector<int>& nums){
        for(int i=0;i<nums.size();i++){
            if(nums[i]==x){
                return 1;
            }
        }
        return 0;
    }
    bool happy(int n,vector<int>& nums){
        if(add_digit(n)==1){
            return true;
        }
        else if(add_digit(n)!=1 && search(add_digit(n),nums)==1){
            return false;
        }
        else{
            nums.push_back(add_digit(n));
            n=add_digit(n);
            return happy(n,nums);
        }
    }
    bool isHappy(int n) {
        vector<int> nums;
        if(happy(n,nums)==true){
            return true;
        }
        return false;
    }
};