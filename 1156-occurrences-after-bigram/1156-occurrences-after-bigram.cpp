class Solution {
public:
    vector<string> findOcurrences(string text, string first, string second) {
        vector<string>ans;
        istringstream iss(text);
        vector<string>v;
       string word;
        while(iss>>word){
            v.push_back(word);
        }
        for(int i=1;i<v.size()-1;i++){
            if(v[i-1]==first && v[i]==second ){
                ans.push_back(v[i+1]);
            }
        }
        return ans;
    }
};