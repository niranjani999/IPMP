class Solution {
public:
    bool isvalid(TreeNode* root, long int l,long int u){
        if(root==NULL) return true;
        return ((root->val>l)&&root->val<u)&& isvalid(root->left,l,root->val)&& isvalid(root->right,root->val,u);
    }
    bool isValidBST(TreeNode* root) {
        return isvalid(root,LONG_MIN,LONG_MAX);
    }
};
