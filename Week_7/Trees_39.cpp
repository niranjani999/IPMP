class Solution {
public:
    void kthOrder(TreeNode* root, int k, int& count, int& res) {
        if(root->left) kthOrder(root->left, k,count, res);
        count++;
        if(count == k) {
            res = root->val;
            return;
        }
        if(root->right) kthOrder(root->right, k,count,res);
    }
    int kthSmallest(TreeNode* root, int k) {
        int count = 0, res = 0;
        kthOrder(root,k,count, res);
        return res;
    }
};
