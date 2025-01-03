class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int i = 0;  // Pointer to track the current element
        int j = 0;  // Pointer to track the position of the next non-zero element
        while(i<nums.size()){
      
            if(nums[i]!=0){
                
                swap(nums[i],nums[j]);
                j++;
            }
            i++;
        }
    }
};