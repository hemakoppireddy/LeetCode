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
        vector<int> arr;
        ListNode* temp=head;
        int count=0;
        while(temp) {
            arr.push_back(temp->val);
            temp=temp->next;
            count++;
        }
        int i=0, j=count-1;
        count=0;
        while(head) {
            if(count%2==0){
                head->val = arr[i];
                i++;
            }
            else {
                head->val=arr[j];
                j--;
            }
            head=head->next;
            count++;
        }
    }
};