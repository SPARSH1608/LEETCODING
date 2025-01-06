class Solution {
public:
    int countWords(vector<string>& words1, vector<string>& words2) {
       map<string,int>mp;
       for(int i=0;i<words1.size();i++){
            mp[words1[i]]++;
       } 
      int cnt=0;
        for(auto i:words2)
            if(mp.find(i)!=mp.end() && mp[i]<=1) mp[i]--;
        
        for(auto it:mp)
            if(it.second==0)cnt++;
        
        return cnt;
    }
};