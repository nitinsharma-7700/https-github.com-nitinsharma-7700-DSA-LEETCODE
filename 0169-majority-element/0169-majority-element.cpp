class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n=nums.size(),candidate,count=0;
       for(int i=0;i<n;i++){

        if(count==0){
            count=1;
            candidate=nums[i];
        }
        else{
            if(candidate==nums[i]){
                count++;
            }
            else count--;
        }

       }
       count=0;
       for(int i=0;i<n;i++){
        if(nums[i]==candidate)
        count++;
       }
       if(count>n/2){
        return candidate;
       }
       return -1;
        
    }
};