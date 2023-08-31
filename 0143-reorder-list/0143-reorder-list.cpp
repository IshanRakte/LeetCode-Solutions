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
ListNode* Reverse(ListNode* head){
ListNode* curr = head;
ListNode* prev = NULL;
ListNode* ptr = NULL;

    while(curr != NULL){
        ptr = curr -> next;
        curr -> next = prev;
        prev = curr;
        curr = ptr;
    }
    return prev;
}

void reorderList(ListNode* head) {
    if(head -> next == NULL || head -> next -> next == NULL){     
        return;     
    }    
    ListNode* slow = head;
    ListNode* fast = head;
    ListNode* last = head;
    while(fast != NULL){
        last = slow;
        slow = slow -> next;
        fast = fast -> next;
        if(fast != NULL){   
            fast = fast -> next;  
        }
    }
    
    last -> next = NULL;
    ListNode* second = Reverse(slow);
    ListNode* first = head;

    while(second){
        ListNode* temp1 = first -> next;
        ListNode* temp2 = second -> next;

        first -> next = second;
        second -> next = temp1;

        second = temp2;
        first = temp1;
    }
}
};