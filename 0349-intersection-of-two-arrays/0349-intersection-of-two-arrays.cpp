class Solution {
public:
    vector<int> dup(vector<int>& vect){      // To delete duplicate from vector
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
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int> final;
        nums1=dup(nums1);
        nums2=dup(nums2);
        int i=0;
        int j=0;
        while(i<nums1.size() && j<nums2.size()){
            if(nums1[i]==nums2[j]){
                final.push_back(nums1[i]);
                i++;
                j++;
            }
            else if(nums1[i]>nums2[j]){
                j++;
            }
            else{
                i++;
            }
        }
        return final;
    }
};