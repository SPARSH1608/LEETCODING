class Solution {
public:
    int findGCD(vector<int>& nums) {
        int m=*max_element(nums.begin(),nums.end());
        int l=*min_element(nums.begin(),nums.end());
        int p=0;
        for(int i=1;i<=m;i++)
        {
            if(l%i==0 && m%i==0)
            {
                p=max(p,i);
            }
        }
        return p;
    }
};