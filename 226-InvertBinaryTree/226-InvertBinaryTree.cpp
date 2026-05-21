// Last updated: 21/05/2026, 18:12:01
class Solution {
public:
    TreeNode* invertTree(TreeNode* root) {
        
        if(root == NULL)
            return NULL;

        TreeNode* temp = root->left;
        root->left = root->right;
        root->right = temp;

        invertTree(root->left);
        invertTree(root->right);

        return root;
    }
};