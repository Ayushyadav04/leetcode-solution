class Solution {
public:
    string reverseStr(string s, int k) {
        for(int i=0;i<s.length();i=i+2*k){
            int a=i;
            int b=i+k-1;
            if(b>s.length()-1){
                b=s.length()-1;
            }
            while(a<b){
                swap(s[a],s[b]);
                a++;
                b--;
            }
        }
        return s;
    }
};