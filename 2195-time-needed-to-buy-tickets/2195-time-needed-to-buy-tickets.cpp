class Solution {
public:
    int timeRequiredToBuy(vector<int>& tickets, int k) {
//         queue<int>q;
//         for(int i=0;i<tickets.size();i++){
//             q.push(i);
//         }
//         int time =0;
//         while(tickets[k]!=0){
//             tickets[q.front()]--;
//             if(tickets[q.front()]){
//                 q.push(q.front());
//             }
//             q.pop();
//             time++;
//         }
// return time;
int time=0;
for(int i=0;i<k;i++){
    time+=min(tickets[k],tickets[i]);
}
    time+=tickets[k];
    for(int i=k+1;i<tickets.size();i++){
         time+=min(tickets[k]-1,tickets[i]);
    }
return time;
    }
};
