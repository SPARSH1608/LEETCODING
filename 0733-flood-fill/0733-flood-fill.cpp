class Solution {
    private:
    void dfs(int initialColor,vector<vector<int>>& image, vector<vector<int>>& vis, int r, int c, int color){
         int n=image.size();
        int m=image[0].size();
        vis[r][c]=1;
     int delR[]={-1,0,1,0};
        int delC[]={0,1,0,-1};
        for(int i=0;i<4;i++){
            int nr=r+delR[i];
            int nc=c+delC[i];
            if(nr>=0 && nr<n && nc>=0 && nc<m && image[nr][nc]==initialColor && !vis[nr][nc]){
                image[nr][nc]=color;
                dfs(initialColor,image,vis,nr,nc,color);
            }
        }

    }

    void bfs(int initialColor, vector<vector<int>>& image, vector<vector<int>>& vis, int r, int c , int color){
        vis[r][c]=1;
        int n=image.size();
        int m=image[0].size();
        queue<pair<int,int>>q;
        q.push({r,c});
        while(!q.empty()){
            int row=q.front().first;
            int col=q.front().second;
            q.pop();
            int delR[]={-1,0,1,0};
            int delC[]={0,1,0,-1};
            for(int i=0;i<4;i++){
                int nr=row+delR[i];
                int nc=col+delC[i];
                if(nr>=0 && nr<n && nc>=0 && nc<m && image[nr][nc]==initialColor && !vis[nr][nc]){
                  
                    image[nr][nc]=color;
                      q.push({nr,nc});
                      vis[nr][nc]=1;
                }
            }
        }
    }
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int n=image.size();
        int m=image[0].size();
        int initialColor=image[sr][sc];
        image[sr][sc]=color;
        vector<vector<int>>vis(n,vector<int>(m,0));
       
      
        // dfs(initialColor, image, vis , sr, sc,color);
        bfs(initialColor, image, vis,sr,sc,color);
             
        return image;
    }
};