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
    ListNode* reverseKGroup(ListNode* head, int k) {
        if(head == NULL){
            return NULL;
        }
        ListNode* next = NULL;
        ListNode* curr = head;
        ListNode* prev = NULL;
        int count = 0;
        
        ListNode* temp = head;
        while (temp != NULL && count < k) {
            temp = temp -> next;
            count++;
        }
        
        if (count == k) {
            while (curr != NULL && count > 0) {
                next = curr -> next;
                curr -> next = prev;
                prev = curr;
                curr = next;
                count--;
            }
            if(next != NULL){
            head -> next = reverseKGroup(next, k);
        }
            return prev;
        }
        return head;
    }
};