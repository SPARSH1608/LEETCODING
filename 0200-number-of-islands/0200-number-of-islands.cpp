class Solution {
public:
void bfs(int r , int c , vector<vector<int>>&vis, vector<vector<char>>grid){
    int n=grid.size();
    int m=grid[0].size();
    vis[r][c]=1;
    queue<pair<int,int>>q;
    q.push({r,c});
    while(!q.empty()){
        int row=q.front().first;
        int col=q.front().second;
        q.pop();
        // for(int delR=-1; delR<=1;delR++){
        //     for(int delC=-1; delC<=1;delC++){
            int delR[]={-1,0,1,0};
            int delC[]={0,1,0,-1};
            for(int k=0;k<4;k++){
                int nr=row+delR[k];
                int nc=col+delC[k];
                if(nr>=0 && nr<n && nc>=0 && nc<m && !vis[nr][nc] &&  grid[nr][nc]=='1'){
                    vis[nr][nc]=1;
                    q.push({nr,nc});
                }
            }
        
    }
}

// void dfs(int r, int c, vector<vector<int>>&vis, vector<vector<char>>grid){
//     int n=grid.size();
//     int m=grid[0].size();
//     vis[r][c]=1;
//     for(int delR=-1;delR<=1;delR++){
//         for(int delC=-1;delC<=1;delC++){
//             int nr=r+delR;
//             int nc=c+delC;
//             if(nr>=0 && nr<=n && nc>=0 && nc<=m && !vis[nr][nr] && grid[nr][nc]=='1'){
//                 dfs(nr,nc,vis,grid);
//             }
//         }
//     }
// }
    int numIslands(vector<vector<char>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        int cnt=0;
        vector<vector<int>>vis(n,vector<int>(m,0));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(!vis[i][j] && grid[i][j]=='1'){
                    bfs(i,j,vis,grid);
                    // dfs(i,j,vis,grid);
                    cnt++;
                }
            }
        }
        return cnt;

    }
};