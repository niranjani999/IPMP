class Solution {
public:
    int height(TreeNode* root) {
        if(root==NULL) return 0;
        return 1+ max(height(root->left), height(root->right));
    }
    bool isBalanced(TreeNode* root) {
        if(root==NULL)return true;
        int lh = height(root->left);
        int rh = height(root->right);
        int d = abs(lh-rh);
        if(d>1)return false;
        else return isBalanced(root->left) && isBalanced(root->right);
    }
};
