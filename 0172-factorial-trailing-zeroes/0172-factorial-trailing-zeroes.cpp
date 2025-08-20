class Solution {
public:
    int trailingZeroes(int n) {
        int count=0;
        while(n>=5){
            count=count+n/5; // Jitne number of 5 present honge utne hi trailing 0 present honge
            n=n/5;            // eg. 5!=5*4*3*2*1 ek five present hai jo 2 ke sath milkar 
                              // trailing 0 create karega 
                              // ese hi 10! me two 5 present honge 10=5*2 or ek 5 alag
        }
        return count;
        
    }
};