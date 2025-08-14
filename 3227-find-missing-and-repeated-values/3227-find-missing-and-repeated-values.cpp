class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        vector<int>ans;
        int x=n*m;
        vector<int>arr;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                arr.push_back(grid[i][j]);
            }
        }
        vector<int>count(n*m,0);
        for(int i=0;i<n*m;i++){
            count[arr[i]-1]++;
        }
        //repeating
        for(int i=0;i<n*m;i++){
            if(count[i]==2){
                ans.push_back(i+1);
                break;
            }
        }
        //missing
        for(int i=0;i<n*m;i++){
            if(count[i]==0){
                ans.push_back(i+1);
                break;
            }
        }
        return ans;


        
    }
};