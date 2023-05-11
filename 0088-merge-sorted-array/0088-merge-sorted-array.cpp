class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int count1=m;
        int count2=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m+n;j++){
                if(nums2[i]<nums1[j]){
                    for(int k=m+n-2;k>=j;k--){
                        nums1[k+1]=nums1[k];
                    }
                    nums1[j]=nums2[i];
                    count1++;
                    count2++;
                    break;
                }
            }
        }
        if(count2!=n){
            for(int i=count2;i<n;i++){
                nums1[count1]=nums2[i];
                count1++;
            }
        }
    }
};