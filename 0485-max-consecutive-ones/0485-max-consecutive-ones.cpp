class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n=nums.size();
        int x=0;
        int ans=0;
        for(int i=0;i<n;i++){
            if(nums[i]==1){
                x++;
                if(x>ans){ 
                 ans=x;
                }
            }
            else{
                
              x=0;  
            }

           
        }
        
        return ans;
    }
};