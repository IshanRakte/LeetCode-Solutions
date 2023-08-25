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
    ListNode* deleteDuplicates(ListNode* head) {
        if (head == NULL || head->next == NULL) {
            return head;
        }

        ListNode* dummy = new ListNode(0);
        dummy->next = head;
        ListNode* prev = dummy;
        ListNode* curr = head;

        while (curr != NULL) {
            bool isDuplicate = false;

            while (curr->next != NULL && curr->val == curr->next->val) {
                isDuplicate = true;
                ListNode* temp = curr;
                curr = curr->next;
                delete temp;
            }
            if (isDuplicate) {
                ListNode* temp = curr;
                curr = curr->next;
                delete temp;
                continue;
            }
            prev->next = curr;
            prev = prev->next;
            curr = curr->next;
        }

        prev->next = NULL;
        ListNode* newHead = dummy->next;
        delete dummy;

        return newHead;
    }
};
