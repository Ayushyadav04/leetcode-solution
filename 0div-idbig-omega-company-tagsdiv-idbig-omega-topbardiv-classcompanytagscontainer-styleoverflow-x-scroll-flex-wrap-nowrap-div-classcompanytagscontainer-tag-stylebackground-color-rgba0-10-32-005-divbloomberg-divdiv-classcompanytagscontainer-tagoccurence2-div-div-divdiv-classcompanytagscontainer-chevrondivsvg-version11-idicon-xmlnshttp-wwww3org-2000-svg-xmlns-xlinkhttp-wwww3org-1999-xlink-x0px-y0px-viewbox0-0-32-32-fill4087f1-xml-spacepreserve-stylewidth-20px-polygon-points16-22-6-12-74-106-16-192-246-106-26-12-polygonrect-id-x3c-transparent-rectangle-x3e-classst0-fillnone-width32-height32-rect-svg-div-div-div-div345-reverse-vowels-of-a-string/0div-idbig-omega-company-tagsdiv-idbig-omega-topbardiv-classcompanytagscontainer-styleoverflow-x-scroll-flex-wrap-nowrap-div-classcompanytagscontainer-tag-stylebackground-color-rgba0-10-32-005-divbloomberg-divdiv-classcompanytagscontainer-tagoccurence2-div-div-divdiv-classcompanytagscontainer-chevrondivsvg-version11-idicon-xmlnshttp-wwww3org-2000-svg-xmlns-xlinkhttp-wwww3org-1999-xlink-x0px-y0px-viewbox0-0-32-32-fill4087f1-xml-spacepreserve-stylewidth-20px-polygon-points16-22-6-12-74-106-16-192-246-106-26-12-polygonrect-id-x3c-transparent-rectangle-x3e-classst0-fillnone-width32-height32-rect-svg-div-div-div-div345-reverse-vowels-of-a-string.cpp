class Solution {
public:
    string reverseVowels(string s) {
        stack<int> t;
        queue<char> q;
        for(int i=0;i<s.length();i++){
            if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u' ||
               s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U'){
                t.push(i);
                q.push(s[i]);
            }
        }
        while(!q.empty()){
            s[t.top()]=q.front();
            t.pop();
            q.pop();
        }
        return s;
    }
};