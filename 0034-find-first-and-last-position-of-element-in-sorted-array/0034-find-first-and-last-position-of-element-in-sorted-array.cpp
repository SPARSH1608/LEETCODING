class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int l=0,r=nums.size()-1;
        int first=-1,last=-1;
        while(l<=r){
            int m=l+(r-l)/2;
            if(nums[m]==target){
                first=m;
                last=m;
                while(first>0 && nums[first-1]==target){
                    first--;
                }
                while(last<nums.size()-1 && nums[last+1]==target){
                    last++;
                }break;
            }else if(nums[m]<target){
                l=m+1;
            }else{
                r=m-1;
            }
        }
        return {first,last};
    }
};