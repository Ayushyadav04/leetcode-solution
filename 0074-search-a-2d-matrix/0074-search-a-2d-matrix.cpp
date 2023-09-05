class Solution {
public:
    bool qw(int low,int high,int target,vector<vector<int>>& matrix){
        int n=matrix[0].size();
        int mid=(low+high)/2;
        if(low>=high){
            return false;
        }
        if(target>=matrix[mid][0] && target<=matrix[mid][n-1]){
            for(int i=0;i<n;i++){
                if(matrix[mid][i]==target){
                    return true;
                }
            }
        }
        else if(target>matrix[mid][n-1]){
            return qw(mid+1,high,target,matrix);
        }
        else if(target<matrix[mid][0]){
            return qw(low,mid,target,matrix);
        }
        return false;
    }
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int low=0;
        int high=matrix.size();
        if(qw(low,high,target,matrix)){
            return true;
        }
        return false;
    }
};