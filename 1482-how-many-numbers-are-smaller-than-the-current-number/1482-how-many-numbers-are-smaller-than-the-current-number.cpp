class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int>v=nums;
        sort(v.begin(),v.end());
        unordered_map<int,int>m;
      for(int i=0;i<v.size();i++){
            if(m.find(v[i])==m.end())
                m[v[i]]=i;
      }
        vector<int>v1;
        for(int i=0;i<nums.size();i++){
           v1.push_back(m[nums[i]]);
        }
   return v1;
    }
};