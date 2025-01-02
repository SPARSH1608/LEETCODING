class Solution {
public:
int isVowels(string s) {
    return (s[0] == 'a' || s[0] == 'e' || s[0] == 'i' || s[0] == 'o' || s[0] == 'u') &&
           (s[s.length() - 1] == 'a' || s[s.length() - 1] == 'e' || s[s.length() - 1] == 'i' || s[s.length() - 1] == 'o' || s[s.length() - 1] == 'u');
}
    vector<int> vowelStrings(vector<string>& words, vector<vector<int>>& queries) {
        vector<int>pre(words.size(),0);
        pre[0]=isVowels(words[0]);
        for(int i=1;i<words.size();i++){
            pre[i]=pre[i-1]+isVowels(words[i]);
        }
    for(auto it:pre) cout<<it<<" ";
       vector<int>ans;
       for(auto &query:queries){
        int left=query[0];
        int right=query[1];
        if(left==0) ans.push_back(pre[right]);
        else ans.push_back(pre[right]-pre[left-1]);
       }
       return ans;
    }
};