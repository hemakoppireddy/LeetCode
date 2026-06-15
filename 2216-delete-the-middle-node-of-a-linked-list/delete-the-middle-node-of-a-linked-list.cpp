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
    ListNode* deleteMiddle(ListNode* head) {
        if(head==NULL || head->next==NULL) {
            return NULL;
        }
        ListNode* temp =head;
        ListNode* curr = head;
        ListNode* prev = prev;

        while(curr && curr->next) {
            prev=temp;
            temp = temp->next;
            curr = curr->next->next;
        }
        prev->next = temp->next;
        return head;
    }
};