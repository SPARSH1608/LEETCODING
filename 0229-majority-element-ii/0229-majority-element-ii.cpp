class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        map<int,int>m;
        for(int i=0;i<nums.size();i++){
            m[nums[i]]++;
        }
   vector<int>v;
        for(pair p: m){
            if(p.second>floor(nums.size()/3)){
               v.push_back(p.first);
            }
        }
        return v;
    }
};