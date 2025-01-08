class Solution {
public:
    bool cntPairs(string s1, string s2){
        int m=s1.length();
        int n=s2.length();
        if(m>n) return false;
        for(int i=0;i<m;i++){
            if(s1[i]!=s2[i]) return false;
        }
         reverse(s2.begin(), s2.end());
         reverse(s1.begin(), s1.end());

        for(int j=0;j<m;j++){
            if(s1[j]!=s2[j]) return false;
        }
        return true;
    }
    int countPrefixSuffixPairs(vector<string>& words) {
        int cnt=0;
        for(int i=0;i<words.size()-1;i++){
            for(int j=i+1;j<words.size();j++){
                if(cntPairs(words[i],words[j])) cnt++;
            }
        }
        return cnt;
    }
};