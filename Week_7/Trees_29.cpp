class Solution
{
    public:
    int isLeaf(Node* node) {
        if(node == NULL)  return 0;
        if(node->left == NULL && node->right == NULL) return 1;
        return 0;
    }
    bool isSumTree(Node* node)
    {
         // Your code here
         int l, r;
         if(node == NULL || isLeaf(node)) return 1;
 
         if( isSumTree(node->left) && isSumTree(node->right))
         {
             if(node->left == NULL)  l = 0;
             else if(isLeaf(node->left)) l = node->left->data;
             else l = 2 * (node->left->data);
             if(node->right == NULL) r = 0;
             else if(isLeaf(node->right)) r = node->right->data;
             else r = 2 * (node->right->data);
             return(node->data == l + r);
         }
         return 0;
    }
};
