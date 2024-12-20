class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        map<int, string,greater<int>>m;
        for(int i=0;i<names.size();i++){
            m[heights[i]]=names[i];
        }
        vector<string>ans;

        for(auto it:m){
            ans.push_back(it.second);
        }
        return ans;
    }
};