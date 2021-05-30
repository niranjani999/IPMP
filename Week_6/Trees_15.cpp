class Solution {
public:
    int inorder_p(TreeNode* root) {
        root = root->left;
        while(root->right) root = root->right;
        return root->val;
    }
    int inorder_s(TreeNode* root) {
        root = root->right;
        while(root->left) root = root->left;
        return root->val;
    }
    TreeNode* deleteNode(TreeNode* root, int key) {
        if(root == NULL) return root;
        if(key > root->val) root->right = deleteNode(root->right, key);
        else if(root->val > key) root->left = deleteNode(root->left, key);
        else{
            if(!root->left && !root->right) root = NULL;
            else if(root->left) {
                root->val = inorder_p(root);
                root->left = deleteNode(root->left, root->val);
            }
            else{
                root->val = inorder_s(root);
                root->right = deleteNode(root->right, root->val);
            }
        }
        return root;
    }
};
