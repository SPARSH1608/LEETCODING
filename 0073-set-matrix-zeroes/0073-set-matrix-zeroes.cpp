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

       vector<int> row(n, 0);
         vector<int> col(m, 0);

        int col0=1;


        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(matrix[i][j]==0){
                 matrix[i][0]=0;
                 if(j!=0) matrix[0][j]=0;
                 else col0=0;
                }
            }
        }

        for(int i=1;i<n;i++){
            for(int j=1;j<m;j++){
                if(matrix[0][j]==0 || matrix[i][0]==0){
                    matrix[i][j]=0;
                }
            }
        }
        if(matrix[0][0]==0){
            for(int i=0;i<m;i++){
                matrix[0][i]=0;
            }
        }

        if(col0==0){
            for(int i=0;i<n;i++){
                matrix[i][0]=0;
            }
        }
    }
};