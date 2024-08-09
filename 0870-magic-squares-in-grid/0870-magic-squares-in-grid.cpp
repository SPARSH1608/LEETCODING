class Solution {

public:
int magic(int r, int c, vector<vector<int>>& grid) {
    if (grid[r][c] != 5) return 0;

    string pattern1 = "438167294381672";
    string pattern2 = "927618349276183";

    vector<pair<int, int>> neighbors = {
        {r-1, c}, {r-1, c+1}, {r, c+1}, {r+1, c+1},
        {r+1, c}, {r+1, c-1}, {r, c-1}, {r-1, c-1}
    };

    string seq = "";
    for (auto [nr, nc] : neighbors) {
        seq += to_string(grid[nr][nc]);
    }

    if (pattern1.find(seq) != string::npos || pattern2.find(seq) != string::npos) {
        return 1;
    }
    return 0;
}

int numMagicSquaresInside(vector<vector<int>>& grid) {
    int ROWS = grid.size();
    int COLS = grid[0].size();
    int res = 0;

    for (int r = 1; r < ROWS - 1; r++) {
        for (int c = 1; c < COLS - 1; c++) {
            res += magic(r, c, grid);
        }
    }
    return res;
}
};