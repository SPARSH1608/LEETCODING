class Solution {
public:
    int maxDistance(vector<int>& colors) {

        int max=0;
        int dist;
        for(int i=0;i<colors.size();i++)
        { 
            for(int j=0;j<colors.size();j++)
            {
                if(i!=j&&colors[i]!=colors[j])
                 {
                    dist=abs(i-j);
                    if(dist>max)
                    {
                     max=dist;
                    }
                 }
            }
        }
        return max;
    }
};