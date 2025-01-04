class Solution {
public:
    int longestPalindrome(string st) {
        set<char>s;
        int l=0;
        for(char c:st){
            if(s.find(c)!=s.end()){
                s.erase(c);
                l+=2;
            }else s.insert(c);
        }
        if(!s.empty()) l++;
        return l;
    }
};