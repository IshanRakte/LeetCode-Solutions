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
    ListNode* doubleIt(ListNode* head) {
        ListNode* dummy = new ListNode();
        ListNode* cur = dummy;
        if (head -> val > 4) {
            ListNode* node = new ListNode(1);
            cur -> next = node;
            cur = cur -> next;
        }
        cur -> next = head;
        while (head != NULL) {
            int carry = 0;
            if (head -> next != NULL && head -> next -> val > 4)
                carry = 1;
            head -> val = (2 * head -> val + carry) % 10;
            head = head -> next;
        }
        return dummy -> next;
    }
};