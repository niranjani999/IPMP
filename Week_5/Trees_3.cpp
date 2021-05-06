class Solution {
    int ans=0;
public:
    int getdiameter(TreeNode* root) {
        if(root==NULL) return 0;
        int left = getdiameter(root->left);
        int right = getdiameter(root->right);
        ans = max(ans,(left+right+1));
        return max(left,right)+1;
    }
public:
    int diameterOfBinaryTree(TreeNode* root) {
        getdiameter(root);
        return ans==0?0:ans-1;
    }
};
