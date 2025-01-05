class Solution {
public:
    string shiftingLetters(string s, vector<vector<int>>& shifts) {
        int n=s.size();
        vector<int>pre(s.size()+1,0);
        for(int i=0;i<shifts.size();i++){
            int start=shifts[i][0];
            int end=shifts[i][1];
            pre[start]+=(shifts[i][2]==1?1:-1);
            pre[end+1]-=(shifts[i][2]==1?1:-1);
        }
        int currentShift=0;
        for(int i=0;i<n;i++){
            currentShift+=pre[i];
            pre[i]=currentShift;
        }
        for(int i=0;i<n;i++){
            int x=(pre[i]%26+26)%26;
            s[i]='a'+(s[i]-'a'+x)%26;
        }
        return s;
    }
};