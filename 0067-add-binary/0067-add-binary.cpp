class Solution {
public:
    string sol(string a,string b,string fi,int carry,int i){
        if(i<0){
            if(carry==1){
                fi+=to_string(carry);
            }
            return fi;
        }
        if(a[i]==b[i]){
            if(a[i]=='1'){
                if(carry==0){
                    fi+="0";
                }
                else{
                    fi+="1";
                }
                carry=1;
            }
            else{
                if(carry==0){
                    fi+="0";
                }
                else{
                    fi+="1";
                }
                carry=0;
            }
        }
        else{
            if(carry==0){
                fi+="1";
            }
            else{
                fi+="0";
            }
            
        }
        return sol(a,b,fi,carry,i-1);
    }
    string reverse(string str){
        string t;
        for (int i = str.length() - 1; i >= 0; i--)
            t+=str[i];
        return t;
    }
    string addBinary(string a, string b) {
        int carry=0;
        string z;
        int x=a.length()-b.length();
        x=abs(x);
        for(int i=0;i<x;i++){
            z+="0";
        }
        if(a.length()>b.length()){
            b=z+b;
        }
        else if(a.length()<b.length()){
            a=z+a;
        }
        int i=a.length()-1;
        string fi="";
        return reverse(sol(a,b,fi,carry,i));
        
    }
};