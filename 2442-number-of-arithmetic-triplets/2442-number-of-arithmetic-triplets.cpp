class Solution {
public:
    int arithmeticTriplets(vector<int>& nums, int diff) {
     int n=nums.size();
     unordered_map<int,bool>m; 
     // ki koi nunber nums me hai ya nhi hai
     for(int i=0;i<n;i++){
         m[nums[i]]=true;
     }
     int count=0;
     //saare numbers in nums ko true kardiya and add kardiya
     for(int i=0;i<n;i++){
         if(m[nums[i]+diff]==true and m[nums[i]-diff]==true){
             //nums[i]-diff and nums[i]+diff dono nums me hai
             count++;
         }
     }
     return count;
    }
};