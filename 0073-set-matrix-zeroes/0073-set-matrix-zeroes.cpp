class Solution {
public:
    void rowMark(int r ,vector<vector<int>>& matrix){
         int n=matrix.size();
        int m=matrix[0].size();
        for(int j=0;j<m;j++){
           if(matrix[r][j]!=0) matrix[r][j]=-10000000;
        }
    }
     void colMark(int c ,vector<vector<int>>& matrix){
         int n=matrix.size();
        int m=matrix[0].size();
        for(int i=0;i<n;i++){
           if(matrix[i][c]!=0)  matrix[i][c]=-10000000;
        }
    }
    void setZeroes(vector<vector<int>>& matrix) {
        int n=matrix.size();
        int m=matrix[0].size();
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(matrix[i][j]==0){
                    rowMark(i,matrix);
                    colMark(j,matrix);
                }
            }
        }

        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(matrix[i][j]==-10000000) matrix[i][j]=0;
            }
        }
    }
};