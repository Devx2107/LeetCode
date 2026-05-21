// Last updated: 21/05/2026, 18:13:21
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        
        ListNode* curr = head;

        while(curr && curr->next) {
            
            if(curr->val == curr->next->val) {
                curr->next = curr->next->next; 
            } else {
                curr = curr->next;
            }
        }

        return head;
    }
};