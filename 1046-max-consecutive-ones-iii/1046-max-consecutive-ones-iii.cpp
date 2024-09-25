class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int n=nums.size();
        int l=0,r=0,ml=0,z=0;
        while(r<n){
            if(nums[r]==0) z++;
            while(z>k){
                if(nums[l]==0){
                    z--;
                }
                l++;
            }

            if(z<=k){
                int len=r-l+1;
                ml=max(ml,len);
            }
            r++;
        }
        return ml;
    }
};