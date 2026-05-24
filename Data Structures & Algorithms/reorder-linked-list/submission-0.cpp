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
    void reorderList(ListNode* head) {

       if(head == NULL || head->next == NULL)
            return;

       ListNode *slow=head,*main=head;
       ListNode *fast=head;

       while(fast->next != NULL && fast->next->next != NULL){
            slow=slow->next;
            fast=fast->next->next;
       }

       ListNode *p=slow->next,*q=NULL,*r;
       slow->next=NULL;

       while(p!= NULL){
            r=q;
            q=p;
            p=p->next;
            q->next=r;
       }

       p = head;

       while(q != NULL){

            ListNode* hnext = p->next;
            ListNode* qnext = q->next;

            p->next = q;
            q->next = hnext;

            p = hnext;
            q = qnext;
       }

       head = main;
    }
};