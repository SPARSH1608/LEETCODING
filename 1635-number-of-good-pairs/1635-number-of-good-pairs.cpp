class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        set<pair<int,int>>v;
        map<int,int>m;
        for(int i=0;i<nums.size();i++){
            m.insert(make_pair(i,nums[i]));
        }
        for(int i=0;i<nums.size();i++){
            for(pair p : m){
                if(p.second==nums[i] && p.first!=i){
                        v.insert({i,p.first});
                }
            } 
        }
        return v.size()/2;
    }
};