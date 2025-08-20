class Solution {
public:
    int findMin(vector<int>& nums) {
        int ans=nums[0];
        

        int start=0,end=nums.size()-1;
        while(start<=end){
            int mid=start+(end-start)/2;
            if(nums[mid]>=nums[0]){ // yha right side wale sorted elements hmesa nums[0] se chote hoge isilie min ellement wahi milega 
                start=mid+1;
            }
            else{
                ans=nums[mid];// kya pta yahi minimum element ho to phele hi ans me store kr lo
                end=mid-1;
            }

        }
        return ans;
    }
};
    