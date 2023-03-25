class Solution {
public:
    bool isPalindrome(string s) {
        int i=0;
        int j=s.size()-1;
        bool flag=true;
        transform(s.begin(), s.end(), s.begin(), ::tolower);
        while(i<=j){
            if(iswalnum(s[i]) &&  iswalnum(s[j])){
                if(s[i]==s[j]){
                    i++;
                    j--;
                }
                else{
                    flag=false;
                    break;
                }
            }
            else if(!iswalnum(s[i]) &&  iswalnum(s[j])){
                i++;
            }
            else if(iswalnum(s[i]) &&  !iswalnum(s[j])){
                j--;
            }
            else{
                i++;
                j--;
            }
        }
        return flag;
    }
};