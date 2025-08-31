class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int ans = 0;
        for(int num : nums) {
            ans ^= num;  // XOR cancels out duplicate numbers
        }
        return ans;
    }
};