class Solution {
public:
    vector<string> findWords(vector<string>& words) {
        vector<string> v;
        vector<string> a={"qwertyuiop","asdfghjkl","zxcvbnm"};
        unordered_map<char,int> mapp;
        for(int i=0;i<a.size();i++){
            for(char c:a[i]){
                mapp[c]=i;
            }
        }
        for(string i:words){
            int temp=mapp[tolower(i[0])];
            bool ri=true;
            for(char c: i){
                if(mapp[tolower(c)]!=temp){
                    ri=false;
                    break;
                }
            }
            if(ri){
                v.push_back(i);
            }
        }
        return v;
    }
};