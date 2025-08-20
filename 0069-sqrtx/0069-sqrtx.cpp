class Solution {
public:
    int mySqrt(int n) {
        // if(n<2){
        //     return n;
        // }
        int ans=0, start=1,end=n;
        while(start<=end){
            long mid=start+(end-start)/2;
            if(mid*mid==n){
                ans=mid;
                break;
            }
            else if(mid*mid<n){
                start=mid+1;
                ans=mid;


            }
            else{
                end=mid-1;
            }
        }
        return ans;
        
    }
};