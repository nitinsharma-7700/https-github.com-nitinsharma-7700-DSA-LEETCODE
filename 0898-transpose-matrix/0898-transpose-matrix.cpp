class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        int row=matrix.size();
        int col=matrix[0].size();
     vector<vector<int>> transpose1(col,vector<int>(row));
        for(int i=0;i<matrix.size();i++){
           
          for(int j=0;j<matrix[0].size();j++){
                transpose1[j][i]=matrix[i][j];
                
            }
        }
            return transpose1;
    }
};