class Solution {
public:
    int findFinalValue(vector<int>& nums, int original) {
        int count = 0;
        for (int i = 0; i >= 0; i++) {
            count = 0;
            for (int j = 0; j < nums.size(); j++) {
                if (nums[j] == original) {
                    count += 1;
                    break;
                }
            }

            if (count == 1) {
                original *= 2;
            } else {
                return original;
            }
        }
        return -1;
    }
};