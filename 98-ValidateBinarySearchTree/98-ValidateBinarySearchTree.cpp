// Last updated: 21/05/2026, 18:13:13
class Solution {
public:
    bool isValidBST(TreeNode* root) {
        return validate(root, LONG_MIN, LONG_MAX);
    }

    bool validate(TreeNode* node, long low, long high) {

        if(node == NULL)
            return true;

        if(node->val <= low || node->val >= high)
            return false;

        return validate(node->left, low, node->val) &&
               validate(node->right, node->val, high);
    }
};