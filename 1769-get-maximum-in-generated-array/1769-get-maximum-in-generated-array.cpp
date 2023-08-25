class Solution {
    private:
    int f(int n){
vector<int>dp(n+1,-1);
int maxi=INT_MIN;
dp[0]=0;
dp[1]=1;
if(n<=1){
    return n;
}
for(int i=0;i<=n;i++){
    if(  2*i>=2 && 2*i<=n ){
        dp[2*i]=dp[i];
        maxi=max(maxi,dp[2*i]);

    }
    if(  2*i+1>=2 && 2*i+1<=n ){
        dp[2*i+1]=dp[i]+dp[i+1];
        maxi=max(maxi,dp[2*i+1]);

    }
  
}
  return maxi;
    }   
public:
    int getMaximumGenerated(int n) {
        if(n<=1){
            return n;
        }
       return f(n);
    }
};