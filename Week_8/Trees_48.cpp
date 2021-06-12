class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if(root==NULL) return NULL;
        if(root->val==p->val || root->val==q->val) return root;
        TreeNode *a,*b;
        a = lowestCommonAncestor(root->left,p,q);
        b = lowestCommonAncestor(root->right,p,q);
        if(a && b) return root;
        if(a != NULL) return a;
        return b;
    }
};
