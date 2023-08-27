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
        if(!head->next) return NULL; 
        
        ListNode* slow = head;    
        ListNode* fast = head -> next;   
        ListNode* n = NULL;
        while(fast && fast -> next){
            n = slow;
            slow = slow -> next;
            fast = fast -> next -> next;
        }
        if(fast == NULL){
            ListNode* temp = slow -> next;
            n -> next = temp;
            delete slow;
            return head;
        }
        if(fast -> next == NULL){
            ListNode* temp = slow -> next;
            slow -> next = temp -> next;
            delete temp;
            return head;
        }
        return head;   
    }
};