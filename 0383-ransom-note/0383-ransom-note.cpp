class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
     map<char,int>mp;
     if (ransomNote.length() > magazine.length()) return false;
     for(char ch : magazine){
        mp[ch]++;
     }
     for(char ch:ransomNote) {
        if(mp[ch] == 0) {
                return false;
            }
            mp[ch]--;
     } 
     return true;
    }
};