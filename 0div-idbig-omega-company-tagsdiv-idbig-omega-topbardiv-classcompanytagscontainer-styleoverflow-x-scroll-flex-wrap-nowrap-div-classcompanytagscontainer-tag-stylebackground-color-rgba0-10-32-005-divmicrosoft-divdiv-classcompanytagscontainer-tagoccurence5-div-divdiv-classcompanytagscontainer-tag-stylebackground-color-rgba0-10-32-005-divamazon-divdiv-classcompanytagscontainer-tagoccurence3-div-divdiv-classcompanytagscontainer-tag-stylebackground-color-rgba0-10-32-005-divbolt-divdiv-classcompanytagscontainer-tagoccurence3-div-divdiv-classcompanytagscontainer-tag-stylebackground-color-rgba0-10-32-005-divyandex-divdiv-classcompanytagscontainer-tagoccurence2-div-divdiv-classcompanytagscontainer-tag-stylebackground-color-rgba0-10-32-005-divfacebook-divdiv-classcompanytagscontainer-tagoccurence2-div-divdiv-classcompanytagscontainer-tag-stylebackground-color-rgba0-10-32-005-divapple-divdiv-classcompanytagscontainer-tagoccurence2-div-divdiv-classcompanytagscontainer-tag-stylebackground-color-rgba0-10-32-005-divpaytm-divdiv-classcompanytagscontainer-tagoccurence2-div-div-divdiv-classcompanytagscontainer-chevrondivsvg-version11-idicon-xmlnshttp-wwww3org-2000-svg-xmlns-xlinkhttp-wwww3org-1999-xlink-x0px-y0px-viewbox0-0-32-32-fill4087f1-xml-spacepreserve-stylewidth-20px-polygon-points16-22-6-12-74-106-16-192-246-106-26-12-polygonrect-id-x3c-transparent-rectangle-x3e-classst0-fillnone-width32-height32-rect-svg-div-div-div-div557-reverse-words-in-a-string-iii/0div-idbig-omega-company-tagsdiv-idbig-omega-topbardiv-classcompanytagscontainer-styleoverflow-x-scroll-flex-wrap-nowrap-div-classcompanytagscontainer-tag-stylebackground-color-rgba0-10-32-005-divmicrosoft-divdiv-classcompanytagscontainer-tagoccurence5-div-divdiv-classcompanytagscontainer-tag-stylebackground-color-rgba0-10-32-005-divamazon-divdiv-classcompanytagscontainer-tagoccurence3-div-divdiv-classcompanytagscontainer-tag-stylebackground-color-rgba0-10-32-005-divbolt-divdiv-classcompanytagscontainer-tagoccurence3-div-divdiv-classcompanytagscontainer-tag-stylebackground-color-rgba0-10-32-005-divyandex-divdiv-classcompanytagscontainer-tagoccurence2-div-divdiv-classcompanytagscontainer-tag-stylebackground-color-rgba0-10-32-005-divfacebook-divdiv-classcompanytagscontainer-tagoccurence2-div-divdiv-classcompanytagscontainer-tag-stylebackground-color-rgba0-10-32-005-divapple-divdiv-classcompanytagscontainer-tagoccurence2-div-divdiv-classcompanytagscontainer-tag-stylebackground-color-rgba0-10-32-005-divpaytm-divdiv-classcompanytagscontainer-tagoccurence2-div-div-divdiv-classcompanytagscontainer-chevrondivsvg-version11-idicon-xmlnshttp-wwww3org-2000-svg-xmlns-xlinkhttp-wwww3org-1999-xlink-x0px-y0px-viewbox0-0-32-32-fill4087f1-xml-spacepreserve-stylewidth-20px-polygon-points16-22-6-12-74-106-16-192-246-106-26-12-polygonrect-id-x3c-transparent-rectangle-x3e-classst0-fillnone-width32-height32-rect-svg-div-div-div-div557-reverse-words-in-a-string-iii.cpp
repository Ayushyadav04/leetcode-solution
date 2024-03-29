class Solution {
public:
    string reverseWords(string s) {
        int start=0;
        int end;
        for(int i=0;i<s.length();i++){
            if(s[i]==' '){
                end=i-1;
                while(start<end){
                    swap(s[start],s[end]);
                    start++;
                    end--;
                }
                start=i+1;
            }
        }
        end=s.length()-1;
        while(start<end){
            swap(s[start],s[end]);
            start++;
            end--;
        }
        return s;
    }
};