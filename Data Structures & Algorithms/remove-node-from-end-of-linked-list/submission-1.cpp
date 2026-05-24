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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode * p=head;
        int count =0;

        while(p != NULL){
            count = count + 1;
            p=p->next;
        }
        if(count == n) return head->next;
        int fs=count - n + 1; // start se konsa number node h 
        p=head;

        for(int i=0;i<fs-2;i++){
            p=p->next;
        }
p->next=p->next->next;
return head;
    }
};
