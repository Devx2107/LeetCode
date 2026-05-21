// Last updated: 21/05/2026, 18:13:08
class Solution {
public:
    int maxDepth(TreeNode* root) {
        
        if(root == NULL)
            return 0;

        return 1 + max(maxDepth(root->left),
                       maxDepth(root->right));
    }
};