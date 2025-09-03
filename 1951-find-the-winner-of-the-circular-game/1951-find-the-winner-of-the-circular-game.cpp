class Solution {
public:
    int winner(vector<bool>&person,int n,int index,int person_left,int k){
        if(person_left==1){
            for(int i=0;i<n;i++){
                if(person[i]==0)
                return i;

            }
        }
        int kill=(k-1)%person_left;// k-1 need to get that postion
        while(kill--){
            index=(index+1)%n;
            while(person[index]==1)
            index=(index+1)%n;//skip the killed person
        }
        person[index]=1;
        //search next starting index and alive person
        while(person[index]==1){ 
         index=(index+1)%n;
        } 
        
        return winner(person,n,index,person_left-1,k);
    }
    int findTheWinner(int n, int k) {
        vector<bool>person(n,0);
        return winner(person,n,0,n,k)+1;// adding 1 because person startin from 1 not 0
    }
};