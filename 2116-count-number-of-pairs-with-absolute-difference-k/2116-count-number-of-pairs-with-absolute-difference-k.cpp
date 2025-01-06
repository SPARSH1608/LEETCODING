class Solution {
public:
    int countKDifference(vector<int>& nums, int k) {
     map<int,int>mp;
     int cnt=0;
     for(int i=0;i<nums.size();i++){
        if(mp.find(nums[i]+k)!=mp.end()){
            cnt+=mp[nums[i]+k];
        }
        if(mp.find(nums[i]-k)!=mp.end()){
            cnt+=mp[nums[i]-k];
        }
        mp[nums[i]]++;
     }   
     return cnt;
    }
};