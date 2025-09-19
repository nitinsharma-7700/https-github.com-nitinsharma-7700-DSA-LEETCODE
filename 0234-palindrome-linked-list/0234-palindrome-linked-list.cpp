/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    bool isPalindrome(ListNode* head) {
        if(head->next==NULL){
            return 1;
        }
        ListNode *temp=head;
        int count=0;
        while(temp){
            count++;
            temp=temp->next;
        }
        count/=2;
        ListNode *curr=head,*prev=NULL;
        // skip no of nodes
        while(count--){
            prev=curr;
            curr=curr->next;
        }
        prev->next=NULL;// break the nodes diff group
        ListNode *front=NULL;
        prev=NULL;
        // reverse 2nd linked list
        while(curr){
            front=curr->next;
            curr->next=prev;
            prev=curr;
            curr=front;
        }
        //comparing both linked list
        ListNode *head1=head; //head pointing first node of first l.l
        ListNode *head2=prev; //prev pointing first node of second l.l
        while(head1){// first linked list always smaller or equal
          if(head1->val!=head2->val){
            return 0;
          }
          head1=head1->next;
          head2=head2->next;


        }
        return 1;
    }
};