class Solution {
public:
    int countPalindromicSubsequence(string s) {
        map<char,pair<int,int>>m;
        for(int i=0;i<s.length();i++){
            if(m.find(s[i])==m.end()){
                m[s[i]].first=i;
            }
            m[s[i]].second=i;
        }
        int ans=0;
        for(pair p :m){
            int l=p.second.first;
            int r=p.second.second;
            if(r-l<=1) continue;
            set<char>st;
            for(int i=l+1;i<r;i++){
                st.insert(s[i]);
            }
            ans+=st.size();
        }
        return ans;
    }
};