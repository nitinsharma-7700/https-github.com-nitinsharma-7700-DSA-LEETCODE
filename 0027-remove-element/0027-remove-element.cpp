class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int k = 0; // pointer for the "new array"
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] != val) {   // keep only non-val elements
                nums[k] = nums[i];
                k++;
            }
        }
        return k;
    }
};