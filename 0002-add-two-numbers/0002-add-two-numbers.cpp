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
ListNode* add(ListNode* head1,ListNode*head2){
    ListNode* t1=head1;
    ListNode* t2=head2;
    ListNode* dummy=new ListNode(-1);
    ListNode* curr=dummy;
int carry=0;
    while(t1!=NULL || t2!=NULL){
        int sum=carry;
        if(t1) sum+=t1->val;
        if(t2) sum+=t2->val;
        ListNode* newNode=new ListNode(sum%10);
        carry=sum/10;
        curr->next=newNode;
        curr=curr->next;
        if(t1)t1=t1->next;
        if(t2)t2=t2->next;
    }
    if(carry){
               ListNode* newNode=new ListNode(carry);
               curr->next=newNode;
    }
    return dummy->next;
}
 ListNode* reverseLL1(ListNode* head) {
        ListNode* prev=NULL;
        ListNode* curr=head;
        while(curr!=NULL){
            ListNode *n=curr->next;
            curr->next=prev;
            prev=curr;
          curr=n;
        }
        return prev;
    }
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        if(l1==NULL) return l2;
        if(l2==NULL) return l1;
     

        ListNode*head=add(l1,l2);
        
        return head;
    }
};