class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n=nums.size();
        int imp=n-1;
        while(imp>=0)
        {
               if(imp==0)
            break;
            if(nums[imp]<=nums[imp-1])
            {
                imp--;
            }
            else
            break;
         
        }
        if(imp!=0)
        {
            int greater=-1;
            for(int i=imp;i<n;i++)
            {
                if(greater==-1 || nums[greater]>nums[i])
                {
                   if(nums[imp-1]<nums[i])
                   {
                       greater=i;
                   }
                }
            }
            swap(nums[greater], nums[imp-1]);
        }
        sort(nums.begin()+imp, nums.end());
        
    }
};