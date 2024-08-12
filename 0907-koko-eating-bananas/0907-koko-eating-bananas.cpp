class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int low=1;
        int high=INT_MIN;
        for(int i=0;i<piles.size();i++){
                high=max(high,piles[i]);
            }
        int ans=-1;
        while(low<=high){
            long long mid=(low+high)/2;
            long long total_hrs=0;
            for(int i=0;i<piles.size();i++){
                total_hrs+=ceil((double)piles[i]/mid);
            }
            if(total_hrs<=h){
                ans=mid;high=mid-1;
            }else {
                low=mid+1;
            }
        }
        return ans;
    }
};