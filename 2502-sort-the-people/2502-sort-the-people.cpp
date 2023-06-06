class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        map<int,string,greater<int>>m;
        for(int i=0;i<heights.size();i++){
            m[heights[i]]=names[i];
        }
        vector<string>v;
       for(pair p:m){
           v.push_back(p.second);
       }
       return v;
    }
};