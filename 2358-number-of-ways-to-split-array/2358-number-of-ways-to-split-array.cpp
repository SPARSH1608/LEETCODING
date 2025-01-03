class Solution {
public:
    int waysToSplitArray(vector<int>& nums) {
        vector<long long>pre(nums.size(),0);
        long long cnt=0;
        pre[0]=nums[0];
        for(long long i=1;i<nums.size();i++){
            pre[i]=pre[i-1]+nums[i];
        }
        for(long long i=1;i<nums.size();i++){
            long long left=pre[i-1];
            long long right=pre[nums.size()-1]-pre[i-1];
            if(left>=right) cnt++;
        }
        return cnt;
    }
};