class Solution {
public:
    bool canWinNim(int n) {
        if(n%4==0)    // agr n = 4,8,12,16 to aap hamesa haroge 
        return 0;
        else 
        return 1;
        
    }
};