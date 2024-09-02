class Solution {
public:
    int chalkReplacer(vector<int>& chalk, int k) {
            const int n=chalk.size();
        vector<long long> pre(n, chalk[0]);
        for(int i=1; i<n; i++){
            pre[i]=pre[i-1]+chalk[i];
    
        }
        k%=pre[n-1];


        return upper_bound(pre.begin(), pre.end(), k)-pre.begin();
    }
    
};