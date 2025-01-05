class Solution {
public:
    bool areOccurrencesEqual(string s) {
      map<char,int>mp;
      for(char ch:s){
        mp[ch]++;
      }  
      set<int>st;
      for(auto it:mp){
        st.insert(it.second);
      }
      return st.size()==1;
    }
};