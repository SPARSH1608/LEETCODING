class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int>hash(255,-1);
        int l=0,r=0,mL=0;
        int n=s.length();
        while(r<n){
            if(hash[s[r]]!=-1 && hash[s[r]]>=l){
                //in the map and in range
                l=hash[s[r]]+1;

            }
            int len=r-l+1;
            mL=max(mL,len);
            hash[s[r]]=r;
            r++;
        }
        return mL;
    }
};