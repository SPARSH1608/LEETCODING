class Solution {
public:
    int numJewelsInStones(string j, string s) {
        unordered_set<char> m(j.begin(),j.end());
        int count=0;
        for(int i=0;i<s.length();i++){
            if(m.find(s[i])!=m.end()){
                count++;
            }
        }
        return count;

    }
};