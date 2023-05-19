class Solution {
public:
    string sortSentence(string s) {
        string req;
        vector<string> a;
        int x=0;
        int t;
        for(int i=0;i<s.length();i++){
            if(s[i]==' '){
                a.push_back(s.substr(x,i-x));
                x=i+1;
            }
        }
        a.push_back(s.substr(x,s.length()-x));
        vector<string> b(a.size());
        for(int i=0;i<a.size();i++){
            int u=a[i].size();
            t=int(a[i][u-1])-49;
            a[i].pop_back();
            b[t]=a[i];
        }
        for(int i=0;i<b.size()-1;i++){
            req+=b[i];
            req+=" ";
        }
        req+=b[b.size()-1];
        return req;
    }
};