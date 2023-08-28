class Solution {
public:
    int imp(stack<int>& s,stack<int>& s1,int k){
        int ans=-1;
        int t,y;
        while(k!=s.top()){
            t=s.top();
            s.pop();
            s1.push(t);
        }
        while(!s1.empty() && k>s1.top()){
            y=s1.top();
            s1.pop();
            s.push(y);
        }
        if(!s1.empty()){
            ans=s1.top();
        }
        while(!s1.empty()){
            int u=s1.top();
            s1.pop();
            s.push(u);
        }
        return ans;
    }
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> v;
        stack<int> s;
        stack<int> s1;
        if(nums2.empty()){
            return v;
        }
        for(int i=0;i<nums2.size();i++){
            s.push(nums2[i]);
        }
        for(int i=0;i<nums1.size();i++){
            v.push_back(imp(s,s1,nums1[i]));
        }
        return v;
    }
};