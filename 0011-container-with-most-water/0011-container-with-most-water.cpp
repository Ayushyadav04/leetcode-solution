class Solution {
public:
    int maxArea(vector<int>& height) {
        int t=height.size()-1;
        int i=0;
        int c=INT_MIN;
        int x=0;
        while(i<=t){
            if(height[i]>height[t]){
                x=height[t]*(t-i);
                if(c<x){
                    c=x;
                }
                t--;
            }
            else{
                x=height[i]*(t-i);
                if(c<x){
                    c=x;
                }
                i++;
            }
        }
        return c;
    }
};