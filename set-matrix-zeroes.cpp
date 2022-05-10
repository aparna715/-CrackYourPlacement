class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        vector<vector<int>>mat=matrix;
        int m=matrix.size();
        int n=matrix[0].size();
        int i,j;
        for(i=0;i<m;i++){
            for(j=0;j<n;j++){
                if(mat[i][j]==0){
                    for(int x=0;x<m;x++){
                        matrix[x][j]=0;
                    }
                    for(int y=0;y<n;y++){
                        matrix[i][y]=0;
                    }
                }
            }
        }
    }
};
