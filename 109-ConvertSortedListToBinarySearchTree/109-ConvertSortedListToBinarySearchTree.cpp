// Last updated: 21/05/2026, 18:13:07
class Solution {
public:

    TreeNode* sortedListToBST(ListNode* head) {

        if(head == NULL)
            return NULL;

        if(head->next == NULL)
            return new TreeNode(head->val);

        ListNode* slow = head;
        ListNode* fast = head;
        ListNode* prev = NULL;

        while(fast && fast->next) {
            prev = slow;
            slow = slow->next;
            fast = fast->next->next;
        }

        prev->next = NULL;

        TreeNode* root = new TreeNode(slow->val);

        root->left = sortedListToBST(head);
        root->right = sortedListToBST(slow->next);

        return root;
    }
};