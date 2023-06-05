class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        unordered_map<int,vector<int>>m;
        for(int i=0;i<nums.size();i++){
            m[nums[i]].push_back(i);
        }
        int count=0;
        for(pair p :m){
            if(p.second.size()>1){
                int s=p.second.size();
                count+=s*(s-1)/2;
            }
        }
        return count;
    }
};