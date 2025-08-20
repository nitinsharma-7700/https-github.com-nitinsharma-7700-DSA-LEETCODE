class Solution {
public:
    int search(vector<int>& nums, int target) {
        int start=0,end=nums.size()-1;
        while(start<=end){
            int mid=start+(end-start)/2;
            if(nums[mid]==target){
                return mid;
            }
            else if(nums[mid]>=nums[0]){//yha par mid num[0] se bda ha to start se lekar  
                                         // mid tak sabhi ascending order me hoge     
                if(target>=nums[start] && target<nums[mid]){
                    end=mid-1;
                }
                 else start=mid+1;

                
            }
            else {
                if(nums[mid]<target && target<=nums[end]){// yha par mid se lekar end tak sabhi
                                                         // ascending order me hoge
                    start=mid+1;
                }
                 else end=mid-1;
            }
        }
        return -1;
    }
};