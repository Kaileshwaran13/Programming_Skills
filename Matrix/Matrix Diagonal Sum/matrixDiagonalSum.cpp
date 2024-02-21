class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int sum = 0;
        for(int i = 0; i < mat.size(); i++){
            sum += ( mat[i][i] + mat[i][mat.size()-1-i] );
        }
        int mid = round(mat.size()/2);
        if(mat.size() % 2 == 0){
            return sum;
        }else{
            return sum - mat[mid][mid];
        }
    }
};