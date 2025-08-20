class Solution {
public:
    bool isPalindrome(int n) {
        int x=n;
    if(n<0){
        return 0;
    }
     
int rev=0;
int rem;
while(n!=0){
    rem=n%10;
    n=n/10;
    if(rev>INT_MAX/10 ){
        return 0;
    }
    rev=rev*10+rem;
    
}
if(rev==x){
     return 1;
}
else{
    return 0;
}



    }
};