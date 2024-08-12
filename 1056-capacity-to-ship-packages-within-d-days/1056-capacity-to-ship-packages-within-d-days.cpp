class Solution {
public:

    bool countDays(vector<int>& weights, int days, long long mid){
        int d=1;
        int w=0;
        for(int i=0;i<weights.size();i++){
            if(w+weights[i]>mid){
                d++;
                w=0;
            }
            w+=weights[i];
        }
        return d<=days;
    }
    int shipWithinDays(vector<int>& weights, int days) {
        long long low=-1;
        for(int i=0;i<weights.size();i++){
            low=max(low,(long long)weights[i]);
        }
        long long high=1e9;
        int ans=-1;
        while(low<=high){
            long long mid=low+(high-low)/2;
            if(countDays(weights,days,mid)==true){
                ans=mid;
                high=mid-1;

            }else{
                low=mid+1;
            }
        } 
        return ans;
    }
};