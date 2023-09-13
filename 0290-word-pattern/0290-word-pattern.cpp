class Solution {
public:
    vector<string> fun(string st){
      vector<string> v;
      string s;
      stringstream a(st);
      while(getline(a,s,' ')){
        v.push_back(s);
      }
      return v;
    }
    bool wordPattern(string pattern, string s) {
      vector<string> ou=fun(s);
      if(pattern.length()!=ou.size()){
        return false;
      }
      unordered_map<char,string> map1;
      unordered_map<string,string> map2;
      for(int i=0;i<pattern.length();i++){
        if(map1.find(pattern[i])==map1.end()){
          map1[pattern[i]]=to_string(i);
        }
      }
      for(int i=0;i<ou.size();i++){
        if(map2.find(ou[i])==map2.end()){
          map2[ou[i]]=to_string(i);
        }
      }
      for(int i=0;i<pattern.size();i++){
        if(map1[pattern[i]]!=map2[ou[i]]){
          return false;
        }
      }
      return true;
    }
};