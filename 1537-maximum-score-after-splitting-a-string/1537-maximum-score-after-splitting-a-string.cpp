class Solution {
public:
    int maxScore(string s) {
        int maxi=INT_MIN;
        for(int i=1;i<s.length();i++){
            //left -> [0,i)
            //right -> [i,n)
            int cnt1=0,cnt2=0;
            string l=s.substr(0,i);
            string r=s.substr(i,s.length()-i);
            for(char ch:l) if(ch=='0') cnt1++;
            for(char ch:r) if(ch=='1') cnt2++;
            maxi=max(maxi,cnt1+cnt2);
        }
        return maxi;
    }
};