class Solution {
public:
    bool sumByDiv(vector<int>& nums, int threshold, long long mid){
        int res=0;
        for(int i=0;i<nums.size();i++){
            res+=ceil((double)nums[i]/mid);
        }
        return res<=threshold;
    }
    int smallestDivisor(vector<int>& nums, int threshold) {
        int low=1;
        int high=-1;
        for(int i=0;i<nums.size();i++){
            high=max(high,nums[i]);
        }
        int ans=-1;
        while(low<=high){
            long long mid=low+(high-low)/2;
            if(sumByDiv(nums,  threshold, mid)==true){
                ans=mid;high=mid-1;
            }else{
                low=mid+1;
            }
        }
        return ans;
    }
};