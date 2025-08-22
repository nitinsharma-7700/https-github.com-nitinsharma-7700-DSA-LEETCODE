class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int start=0,end=nums.size()-1,first=-1;
        // first occurence
        while(start<=end){
            int mid=start+(end-start)/2;
            if(nums[mid]==target){
                end=mid-1;
                first=mid; // kya pta isse phle phi same no present ho

            }
            else if(nums[mid]<target){
                start=mid+1;
            }
            else end=mid-1;
        }
          start=0,end=nums.size()-1;int last=-1;
        // last occurence
        while(start<=end){
            int mid=start+(end-start)/2;
            if(nums[mid]==target){
                last=mid;
                start=mid+1; //kua pta iske baad bhi same number present ho

            }
            else if(nums[mid]<target){
                start=mid+1;
            }
            else end=mid-1;
        }

       return {first,last};;
    }
};