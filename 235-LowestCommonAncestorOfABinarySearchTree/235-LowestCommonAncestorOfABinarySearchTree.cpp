// Last updated: 21/05/2026, 18:11:56
class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        
        while(root) {
            if(p->val < root->val && q->val < root->val)
                root = root->left;
            else if(p->val > root->val && q->val > root->val)
                root = root->right;
            else
                return root;
        }
        return NULL;
    }
};