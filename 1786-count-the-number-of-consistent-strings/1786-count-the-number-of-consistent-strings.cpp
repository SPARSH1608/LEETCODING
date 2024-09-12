class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        map<char,int>mp;
        for(int i=0;i<allowed.length();i++){
            mp[allowed[i]]++;
        }
        int ans=0;
        for(int i=0;i<words.size();i++){
            string s=words[i];
            ans++;
            for(int j=0;j<s.length();j++){
                if(mp.find(s[j])==mp.end()){ 
                         ans--;  
                    break;  
               
                }
      
            }

           
        }
        return ans;
    }
};