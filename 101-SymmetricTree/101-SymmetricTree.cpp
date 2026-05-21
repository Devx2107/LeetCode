// Last updated: 21/05/2026, 18:13:10

class Solution {
public:
    bool isSymmetric(TreeNode* root) {
        return mirror(root->left, root->right);
    }

    bool mirror(TreeNode* left, TreeNode* right) {

        if(left == NULL && right == NULL)
            return true;

        if(left == NULL || right == NULL)
            return false;

        if(left->val != right->val)
            return false;

        return mirror(left->left, right->right) &&
               mirror(left->right, right->left);
    }
};