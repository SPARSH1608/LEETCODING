class Solution {
public:
    int arrayPairSum(vector<int>& nums) 
    {
        sort ( nums.begin() , nums.end() ) ;
        int ans = 0 ;
        int i = 0 ;
        while ( i < nums.size() )
        {
            ans = ans + nums[i] ;
            i = i + 2 ;
        }
        return ans ;
    }
};