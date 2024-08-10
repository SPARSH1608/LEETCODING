class Solution {
public:
    void dfs(int r, int c , vector<vector<int>>& vis, vector<vector<int>>& grid2) {
        int n = grid2.size();
        int m = grid2[0].size();
        if (r < 0 || c < 0 || r == n || c == m || vis[r][c] == 1 || grid2[r][c] == 1) 
            return;
        
        vis[r][c] = 1;
        int delR[] = {-1, 0, 1, 0};
        int delC[] = {0, 1, 0, -1};
        
        for (int i = 0; i < 4; i++) {
            int nr = r + delR[i];
            int nc = c + delC[i];
            dfs(nr, nc, vis, grid2);
        }
    }

    int regionsBySlashes(vector<string>& grid) {
        int n = grid.size();
        int m = grid[0].length();
        int new_r = n * 3;
        int new_c = m * 3;
        
        vector<vector<int>> grid2(new_r, vector<int>(new_c, 0));
        
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (grid[i][j] == '/') {
                    grid2[i * 3][j * 3 + 2] = 1;
                    grid2[i * 3 + 1][j * 3 + 1] = 1;
                    grid2[i * 3 + 2][j * 3] = 1;
                } else if (grid[i][j] == '\\') {
                    grid2[i * 3][j * 3] = 1;
                    grid2[i * 3 + 1][j * 3 + 1] = 1;
                    grid2[i * 3 + 2][j * 3 + 2] = 1;
                }
            }
        }
        
        int cnt = 0;
        vector<vector<int>> vis(new_r, vector<int>(new_c, 0));
        
        for (int i = 0; i < new_r; i++) {
            for (int j = 0; j < new_c; j++) {
                if (grid2[i][j] == 0 && vis[i][j] == 0) {
                    dfs(i, j, vis, grid2);
                    cnt++;
                }
            }
        }
        
        return cnt;
    }
};
