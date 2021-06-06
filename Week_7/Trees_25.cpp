// modify the BST and return its root
Node* change(Node *root, int& sum){
    if(root==NULL) return {};
    change(root->right, sum);
    sum += root->data;
    root->data = sum;
    change(root->left,sum);
    return root;
}
Node* modify(Node *root)
{
    // Your code here
    int sum = 0;
    change(root,sum);
    return root;
}
