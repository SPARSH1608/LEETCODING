class Solution {
    private:
    int counting(int i, vector<int>&dp){
        //base case
        if(i==0 || i==1){
            return dp[i]=1;
        }
        if(dp[i]!=-1){
            return dp[i];
        }
        

        int left=counting(i-1,dp);
        int right=counting(i-2,dp);
        return dp[i]=left+right;
    }
public:
    int climbStairs(int n) {
         vector<int>dp(n+1,-1);
        return counting(n,dp);

    }
};