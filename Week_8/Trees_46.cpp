class Solution
{
    public:
    bool hasPathSum(Node *root, int S) {
    // Your code here
    if(root==NULL) return 0;
    bool ans = 0;
    int sum = S- root->data;
    if(root->left==NULL && root->right==NULL && sum==0) return 1;
    if(root->left) ans = ans || hasPathSum(root->left,sum);
    if(root->right) ans = ans || hasPathSum(root->right,sum);
    return ans;
}
};
