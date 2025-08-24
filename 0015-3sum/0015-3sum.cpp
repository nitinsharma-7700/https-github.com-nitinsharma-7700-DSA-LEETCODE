class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& a) {
        vector<vector<int>> result;
        int n = a.size();

        
        sort(a.begin(), a.end());

        
        for (int i = 0; i < n - 2; i++) {
            
            if (i > 0 && a[i] == a[i - 1]) continue;

            int start = i + 1, end = n - 1;

            while (start < end) {
                int sum = a[i] + a[start] + a[end];

                if (sum == 0) {
                    result.push_back({a[i], a[start], a[end]});

                    // Skip duplicates for 'start'
                    while (start < end && a[start] == a[start + 1]) start++;
                    // Skip duplicates for 'end'
                    while (start < end && a[end] == a[end - 1]) end--;

                    start++;
                    end--;
                }
                else if (sum < 0) {
                    start++;
                }
                else {
                    end--;
                }
            }
        }

        return result;
    }
};