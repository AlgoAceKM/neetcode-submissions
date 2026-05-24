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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode *p=l1;
        ListNode *q=l2;
        ListNode *t= new ListNode;
        ListNode *s=t;
        int carry=0;
        t->val=(p->val+q->val)%10;
        carry=(p->val+q->val)/10;
        t->next=NULL;
        p=p->next;q=q->next;
      
        while(p!= NULL && q != NULL){
            ListNode *z=new ListNode;
           z->val=(p->val+q->val+carry)%10;
           carry=(p->val+q->val+carry)/10;
           z->next=NULL;
           s->next=z;
           s=s->next;
           p=p->next;
           q=q->next;
        }

        if(p != NULL && carry ==0){
            s->next=p;
        }else if(q != NULL && carry ==0){
            s->next=q;
        }else  if(p != NULL && carry !=0){
            while(p!= NULL){
            ListNode *z=new ListNode;
           z->val=(p->val+carry)%10;
           carry=(p->val+carry)/10;
           z->next=NULL;
           s->next=z;
           s=s->next;
           p=p->next;
        }
        }else if(q != NULL && carry !=0){
            while( q != NULL){
            ListNode *z=new ListNode;
           z->val=(q->val+carry)%10;
           carry=(q->val+carry)/10;
           z->next=NULL;
           s->next=z;
           s=s->next;
           q=q->next;
        }

        }

        if(carry != 0){
             ListNode *z=new ListNode;
             z->val=1;
             z->next=NULL;
             s->next=z;
        }
        return t;
    }
};
