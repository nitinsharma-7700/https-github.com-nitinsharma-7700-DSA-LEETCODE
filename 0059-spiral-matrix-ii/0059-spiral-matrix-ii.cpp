class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
       
        vector<vector<int>> arr(n,vector<int>(n));
        int top=0,bottom=n-1,right=n-1,left=0,nums=1;
        while(top<=bottom && left<=right){
            for(int j=left;j<=right;j++){
                arr[top][j]=nums++;

            }
            top++;
            for(int i=top;i<=bottom;i++){
                arr[i][right]=nums++;
            }
            right--;
            if(top<=bottom){
            for(int j=right;j>=left;j--){
                arr[bottom][j]=nums++;

            }
            bottom--;
            }
            if(left<=right){
                for(int i=bottom;i>=top;i--){
                    arr[i][left]=nums++;

                }
                left++;
            }

        }
        return arr;
    
    }
};