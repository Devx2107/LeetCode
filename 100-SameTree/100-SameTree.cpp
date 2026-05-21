// Last updated: 21/05/2026, 18:13:12
class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        
        if(p == NULL && q == NULL)
            return true;

        if(p == NULL || q == NULL)
            return false;

        if(p->val != q->val)
            return false;

        return isSameTree(p->left, q->left) &&
               isSameTree(p->right, q->right);
    }
};