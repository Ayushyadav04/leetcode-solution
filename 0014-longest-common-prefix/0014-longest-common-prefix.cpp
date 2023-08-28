class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int mini=INT_MAX;
        for(int i=0;i<strs.size();i++){
            if(strs[i].length()<mini){
                mini=strs[i].length();
            }
        }
        int i=0;
        char c;
        cout<<mini<<endl;
        while(i<mini){
            c=strs[0][i];
            for(int j=0;j<strs.size();j++){
                if(strs[j][i]!=c){
                    return strs[j].substr(0,i);
                }
            }
            i++;
        }
        return strs[0].substr(0,i);
    }
};