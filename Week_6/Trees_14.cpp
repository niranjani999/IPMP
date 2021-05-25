class Solution{
  public:
    /*You are required to complete this method*/
    bool checking(struct Node *root, int level, int *leaf) {
        if (root == NULL) return true;
        if (root->left == NULL && root->right == NULL) {
            if (*leaf == 0)
            {
                *leaf = level; 
                return true;
            }
            return (level == *leaf);
        }
        return checking(root->left, level + 1, leaf) && checking(root->right, level + 1, leaf);
    }
    bool check(Node *root)
    {
        //Your code here
        int level = 0, leaf = 0;
        return checking(root,level,&leaf);
    }
};
