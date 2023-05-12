class Solution {
public:
    vector<int> getRow(int rowIndex) {
        // vector<int> vec(rowIndex+1);
        // vec[0]=1;
        // vec[rowIndex]=1;
        // if(rowIndex>1){
        //     for(int i=1;i<rowIndex;i++){
        //         vec[i]=getRow(rowIndex-1)[i-1]+getRow(rowIndex-1)[i];
        //     }
        // }
        // return vec;


        // In the above method(recursive calls) getting time limit exceed

        
        vector<vector<int>> vec(rowIndex+1);
        for(int i=0;i<=rowIndex;i++){
            vec[i]=vector<int>(i+1);
            vec[i][0]=1;
            vec[i][i]=1;
        }
        for(int i=2;i<=rowIndex;i++){
            for(int j=1;j<i;j++){
                vec[i][j]=vec[i-1][j-1]+vec[i-1][j];
            }
        }
        return vec[rowIndex];
    }
};