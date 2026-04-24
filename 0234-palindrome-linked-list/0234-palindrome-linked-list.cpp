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
        if(!head || !head->next) return true;
        ListNode* slow = head;
        ListNode* fast = head;
        
        while(fast && fast->next) {
            slow = slow->next;
            fast = fast->next->next;
        }
        
        stack<int> stk;
        ListNode* curr = slow;
        while(curr) {
            stk.push(curr->val);
            curr = curr->next;
        }
        
        
        curr = head;
        while(!stk.empty()) {
            if(curr->val != stk.top()) {
                return false;  
            }
            stk.pop();
            curr = curr->next;
        }
        
        return true;  
    }
};