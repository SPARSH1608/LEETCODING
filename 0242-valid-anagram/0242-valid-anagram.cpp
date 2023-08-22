class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int>f;
        for(auto ch:s){
            f[ch]++;
        }
        for(auto ch:t){
            f[ch]--;
        }
        for(pair p:f){
            if(p.second!=0){
                return false;
            }
        }
        return true;
    }
};