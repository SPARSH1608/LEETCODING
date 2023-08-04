class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        vector<vector<int>>vis(n,vector<int>(m,0));
        int cntFresh=0;
        int tm=0;
        int cnt=0;
    queue<pair<pair<int,int>,int>>q;

        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]==2){
                    q.push({{i,j},0});
                }else{
                    vis[i][j]=0;
                }

                if(grid[i][j]==1){
                    cntFresh++;
                }
            }
        }

    while(!q.empty()){
        int r=q.front().first.first;
        int c=q.front().first.second;
        int t=q.front().second;
        tm=max(tm,t);
        q.pop();
        int delR[]={-1,0,1,0};
        int delC[]={0,1,0,-1};
        for(int i=0;i<4;i++){
            int nr=r+delR[i];
            int nc=c+delC[i];
            if(nr>=0 && nr< n && nc>=0 && nc<m && vis[nr][nc]==0 && grid[nr][nc]==1){
                //not visited fresh orange in valid range
                vis[nr][nc]=2;
                cnt++;
                q.push({{nr,nc},t+1});
            }
        }

    
    }
        if(cnt!=cntFresh){
            return -1;
        }
        if(cntFresh==0){
            return 0;
        }
    return tm;

    }
};