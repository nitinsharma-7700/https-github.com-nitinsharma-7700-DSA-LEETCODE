class Solution {
public:
    int minKBitFlips(vector<int>& nums, int k) {
        int n=nums.size();
       queue<int>q;
       int flip=0;
       for(int i=0;i<n;i++){
        if(!q.empty()&&q.front()<i){
            q.pop();
        }
        if(q.size()%2==nums[i]){
            if(i+k-1>=n){
                return -1;
            }
            q.push(i+k-1);// push karo us index ko jhaha tak window hai
            flip++;

        }
       }
       return flip;
    }
};