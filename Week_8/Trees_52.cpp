class Solution {
public:
    TreeNode* bst(vector<int>& nums,int a,int b){
        if(a>b)return NULL;
        int mid = (a+b)/2;
        TreeNode* root=new TreeNode(nums[mid]);
        root->left=bst(nums,a,mid-1);
        root->right=bst(nums,mid+1,b);
        return root;
    }
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        int n= nums.size();
        return bst(nums,0,n-1);
    }
};
