class Solution {
public:
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
        int n=mat.size();
        int m=mat[0].size();
        queue<pair<pair<int,int>,int>>q;
    vector<vector<int>>vis(n,vector<int>(m,0));
    vector<vector<int>>ans(n,vector<int>(m,0));

        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(!vis[i][j] && mat[i][j]==0){
                    q.push({{i,j},0});
                    vis[i][j]=1;
                }
            }
        }

        while(!q.empty()){
            int row=q.front().first.first;
            int col=q.front().first.second;
            int steps=q.front().second;
            q.pop();
            ans[row][col]=steps;
            int delR[]={-1,0,1,0};
            int delC[]={0,1,0,-1};
            for(int i=0;i<4;i++){
                int nr=row+delR[i];
                int nc=col+delC[i];
                if(nr>=0 && nr<n && nc>=0 && nc<m && !vis[nr][nc] && mat[nr][nc]==1){
                    q.push({{nr,nc},steps+1});
                    vis[nr][nc]=1;
                }
            }
        }
        return ans;
    }
};