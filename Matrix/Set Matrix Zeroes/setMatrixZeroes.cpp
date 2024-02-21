class Solution {
public:
    vector<vector<int>> zero(int row,int column, vector<vector<int>>& matrix1){
        for(int i = 0; i < matrix1.size(); i++){
            for(int j = 0; j < matrix1[i].size(); j++){
                if( (i == row || j == column) && matrix1[i][j] != 0){
                    matrix1[i][j] = -130303;
                }
            }
        }
        return matrix1;
    }

    void setZeroes(vector<vector<int>>& matrix) {
        for(int i = 0; i < matrix.size(); i++){
            for(int j = 0; j < matrix[i].size(); j++){
                if(matrix[i][j] == 0){
                    matrix[i][j] = -130303;
                    matrix = zero(i,j,matrix);
                }
            }
        }
        for(int i = 0; i < matrix.size(); i++){
            for(int j = 0; j < matrix[i].size(); j++){
                if(matrix[i][j] == -130303){
                    matrix[i][j] = 0;
                }
                // cout << matrix[i][j] << " ";
            }
            // cout << '\n';
        }   
    }
};