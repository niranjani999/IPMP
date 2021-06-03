class Solution{
  public:
    // returns the inorder successor of the Node x in BST (rooted at 'root')
    Node* minValue(Node* node) {
        Node* c = node;
        while (c->left != NULL) c = c->left;
        return c;
    }
    Node* inOrderSuccessor(Node *root, Node *x)
    {
        //Your code here
        if (x->right != NULL) return minValue(x->right);
        Node* s = NULL;
        while (root != NULL) {
            if (x->data < root->data) {
                s = root;
                root = root->left;
            }
            else if (x->data > root->data) root = root->right;
            else break;
        }
        return s;
    }
};
