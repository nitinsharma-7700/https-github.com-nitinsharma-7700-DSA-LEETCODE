class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int row=matrix.size(),col=matrix[0].size();
        vector<vector<int>>ans(row,vector<int>(col));
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                ans[j][row-1-i]=matrix[i][j];
            }
        }
        matrix=ans;
        
    }
};