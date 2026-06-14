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
    int pairSum(ListNode* head) {
        ListNode *curr, *nextNode, *prev;
        prev = NULL;
        curr = head, nextNode = head;
        ListNode *temp;
        temp=head;
        int n=0;
        while(temp!=NULL) {
            temp = temp->next;
            n++;
        }
        int t = n;
        while(t > n/2) {
            nextNode = nextNode->next;
            curr->next = prev;
            prev = curr;
            curr = nextNode;
            t--;
        }
        int maxSum = INT_MIN;
        while(nextNode!=NULL) {
            maxSum = max(maxSum, prev->val + nextNode->val);
            prev = prev->next;
            nextNode = nextNode->next;
        }
        return maxSum;
    }
};