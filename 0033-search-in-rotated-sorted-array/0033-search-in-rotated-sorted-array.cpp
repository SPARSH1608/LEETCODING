class Solution {
public:
    int search(vector<int>& nums, int target) {
          int i=0;
        int l=nums.size()-1;
        while(i<=l){
            int m=i+(l-i)/2;
            if(nums[m]==target){
                return m;
            }
            if(nums[m]>=nums[i]){
                //sorted
                if(target>=nums[i] && target<nums[m]){
                    l=m-1;
                }else{
                    i=m+1;
                }
            }
            else if(nums[m]<=nums[l]){
                //sorted
                if(target<=nums[l] && target>nums[m]){
                    i=m+1;
                }else{
                    l=m-1;
                }
            }
            
        }
        return -1;
    }
};