class Solution {
public:
    bool isUgly(int n) {
        if (n <= 0) return false;

        // Keep dividing n by 2, 3, and 5
        while (n % 2 == 0) n /= 2;
        while (n % 3 == 0) n /= 3;
        while (n % 5 == 0) n /= 5;

        // If reduced to 1, it's ugly
        return n == 1;
    }
};