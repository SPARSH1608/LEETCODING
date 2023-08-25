class Solution {
    private:
    int count(vector<int>&prices , int i , int j){
        //base case
        if(j==prices.size()){
            return 0;
        }

        //recursive case
        if(prices[i]>=prices[j]){
            return count(prices,i+1,i+2);
        }

        int X=prices[j]-prices[i];
        int Y=count(prices,i,j+1);
        int maxi=INT_MIN;
        maxi=max(maxi,max(X,Y));
        return maxi;
    }
public:
    int maxProfit(vector<int>& prices) {
        int ans=count(prices,0,1)==INT_MIN? 0: count(prices,0,1);
        return ans;
    }
};