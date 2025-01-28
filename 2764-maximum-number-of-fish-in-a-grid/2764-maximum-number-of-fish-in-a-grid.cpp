class Solution {
public:
    int dfs(vector<vector<int>>& grid,vector<vector<int>>& visited, int r, int c, int delR[], int delC[], int Fans){
        visited[r][c]=-1; //-1 is visited
 int count = grid[r][c];
        int n=grid.size();
        int m=grid[0].size();
        for(int i=0;i<4;i++){
         int nr=r+delR[i];
        int nc=c+delC[i];
        if(nr>=0 && nr<n && nc>=0 && nc<m && visited[nr][nc]!=-1 && grid[nr][nc]>0 ){
     count = count + dfs(grid, visited, nr, nc, delR, delC, Fans);
        }
            
        }     
        Fans = max(Fans, count);
 
        
        return Fans;
    }
    int findMaxFish(vector<vector<int>>& grid) {  
        int n=grid.size();
        int m=grid[0].size();
       vector<vector<int>> visited(n, vector<int>(m, 0));
      int ans=0;
        
        int delR[]={-1,0,1,0};
        int delC[]={0,1,0,-1};
   for(int i=0;i<n;i++){
       for(int j=0;j<m;j++){
           if(grid[i][j]!=0){
                ans=max(ans,dfs(grid,visited,i,j,delR, delC,0));
           }
       
       }
   }
    return ans;
      
    }
};