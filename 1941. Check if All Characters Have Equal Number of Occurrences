class Solution {
public:
    bool areOccurrencesEqual(string s) {
      vector<int>v;
      unordered_map<char,int>mp;
      for(auto it:s){
          mp[it]=mp[it]+1;
      }  
      for(auto it:mp){
          v.push_back(it.second);
      }
      for(int i=1;i<v.size();i++){
          if(v[i]!=v[i-1]){
              return false;
          }
      }
      return true;
    }
};
