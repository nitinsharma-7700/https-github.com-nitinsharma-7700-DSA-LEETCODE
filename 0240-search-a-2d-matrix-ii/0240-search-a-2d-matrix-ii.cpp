class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        for(int i=0;i<matrix.size();i++){
            int start=0,end=matrix[i].size()-1;
            while(start<=end){
                int mid=start+(end-start)/2;
                if(matrix[i][mid]==target){
                    return 1;
                }
                else if(matrix[i][mid]>target){
                    end=mid-1;
                }
                else start=mid+1;
            }
        }
        return 0;
        
    }
};