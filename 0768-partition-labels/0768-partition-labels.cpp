class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        int n = intervals.size();
        sort(intervals.begin(), intervals.end());
        vector<vector<int>> output;
        for(auto interval : intervals){
            if(output.empty() || output.back()[1] < interval[0]){
                output.push_back(interval);
            }
            else{
                output.back()[1] = max(output.back()[1], interval[1]);
            }
        }
        return output;
    }
    vector<int> partitionLabels(string p) {
        vector<vector<int>> t(26,vector<int>(1+1,-1));
        for(int i=0;i<p.size();i++)
        {
            if(t[p[i]-'a'][0]==-1) 
            {
                t[p[i]-'a'][0]=i;
                t[p[i]-'a'][1]=i;
            }
            else 
            {
                t[p[i]-'a'][1]=i;
            }
        }
        
        t=merge(t);
        vector<int>an(t.size());
        int q=0;
        for(int i=0;i<t.size();i++)
        {
            if(t[i][0]==-1) q=1;
            cout<<t[i][0]<<","<<t[i][1]<<" ";
           an[i]=t[i][1]-t[i][0]+1;
        }
        if(q==1)
        an.erase(an.begin());
        return an;
    }
};