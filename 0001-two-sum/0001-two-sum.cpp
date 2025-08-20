#include<vector>
#include<algorithm>
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<pair<int,int>> v;
        for(int i=0;i<nums.size();i++){

        v.push_back({nums[i],i});// nums[i] ko jo index indx assign kr diya vo sorting karne
                                 // ke bad bhi uske sath rahega
        }
        
        sort(v.begin(),v.end());
        int start=0,end=v.size()-1;
        while(start<end){
           int sum= v[start].first+v[end].first;// ye v ke indx ki value ko add krege 
            if(sum==target){
                
                return {v[start].second,v[end].second};// original indx ko print karega 
                
            }
            else if(sum<target){
                start++;
            }
            else {
                end--;
            }
        }
        return {};
    }
};