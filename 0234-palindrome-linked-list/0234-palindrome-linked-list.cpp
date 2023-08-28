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
    bool isPalindrome(ListNode* head) {
        vector<int> temparr;
        ListNode* temp = head;
        while(temp != NULL){
            temparr.push_back(temp -> val);
            temp = temp -> next;
        }
        int n = temparr.size();
        int start = 0;
        int end = n - 1;
        while(start <= end){
            if(temparr[start] != temparr[end]){
                return 0;
            }
            start++;
            end--;
        }
        return true;
    }
};