class Solution {
public:
    int firstUniqChar(string s) {
        int arr[26];
        for(int i=0;i<26;i++){
            arr[i]=0;
        }
        int x=0;
        queue<char> q;
        for(int i=0;i<s.length();i++){
            arr[int(s[i])-97]+=1;
            q.push(s[i]);
            cout<<arr[int(q.front())-97]<<endl;
            while(!q.empty() && arr[int(q.front())-97]>1){
                q.pop();
                x++;
            }
        }
        if(x==s.length()){
            x=-1;
        }
        return x;
    }
};