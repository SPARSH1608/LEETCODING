class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> arr(2, -1); // Initialize the result array with [-1, -1]
         int n = nums.size();
         int count = 0;

        for (int i = 0; i < n; i++) {
            if (nums[i] == target) {
                count++;
                arr[1] = i; 
                arr[0] = i - (count - 1); 
            }
        }
        
        return arr;
        
    }
};