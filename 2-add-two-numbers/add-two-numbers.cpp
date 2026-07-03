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
        ListNode newNode(0);
        ListNode *curr = &newNode;
        int carry = 0;
        int x1, x2;
        while(l1!=nullptr || l2!=nullptr){
            if(l1!=NULL) x1 = l1->val;
            else x1 = 0;
            if(l2!=NULL) x2 = l2->val;
            else x2=0;
            int sum = x1+x2+carry;
            carry = sum/10;
            curr->next = new ListNode(sum%10);
            curr = curr->next;
            if(l1!=nullptr) l1 = l1->next;
            if(l2!=nullptr) l2=l2->next;
        }
        if(carry>0) curr->next = new ListNode(carry);
        return newNode.next;
    }
};