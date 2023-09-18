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
ListNode* reverseLL(ListNode*head){
    if(head->next==NULL ) {
        return head;
    }
    ListNode* newHead=reverseLL(head->next);
    head->next->next=head;
    head->next=NULL;
    return newHead;
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
    ListNode* reverseList(ListNode* head) {
        if(head==NULL) return NULL;
       return reverseLL(head);
    }
};