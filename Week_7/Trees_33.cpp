//Function to check whether a binary tree is foldable or not.
bool isfold(Node* a, Node* b) {
    if(a == NULL && b == NULL) return true;
    if(a == NULL || b == NULL) return false;
    return isfold(a->left,b->right) && isfold(a->right,b->left);
}
bool IsFoldable(Node* root)
{
    // Your code goes here
    if(root == NULL) return true;
    return isfold(root->left, root->right);
}
