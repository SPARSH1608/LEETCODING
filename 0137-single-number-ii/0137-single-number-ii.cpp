class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int,int>m;
        for(int i=0;i<nums.size();i++){
            m[nums[i]]++;
        }
        int ans=0;
        for(auto p: m){
            if(p.second!=3){
                ans=p.first;
            }
        }
        return ans;
    }
};