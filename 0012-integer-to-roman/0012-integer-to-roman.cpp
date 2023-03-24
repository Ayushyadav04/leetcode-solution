class Solution {
public:
    string intToRoman(int num) {
        vector<string> roman({"I","IV","V","IX","X","XL", "L", "XC", "C", "CD", "D", "CM", "M"});
        vector<int> value({1, 4, 5, 9, 10, 40, 50, 90, 100, 400, 500, 900, 1000});
        int t=roman.size()-1;
        string s="";
        while(num!=0){
            while(value[t]<=num){
                s+=roman[t];
                num-=value[t];
            }
            t--;
        }
        return s;
    }
};