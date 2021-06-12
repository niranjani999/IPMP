class Solution
{
    public: 
    //Function to convert binary tree to doubly linked list and return it.
    Node * bdll(Node *root, Node *a,Node *b){
        if(root==NULL)return NULL;
        return root;
        Node *l=root->left;
        Node *r=root->right;
        bdll(root->left,a,b);
        if(a==NULL) a=root;
        root->left = b;
        if(b != NULL) b->right = root;
        b=root;
        bdll(root->right,a,b);
        
    }
    Node * bToDLL(Node *root)
    {
        // your code here
        if(root==NULL)return NULL;
        Node *a=NULL;
        Node *b=NULL;
        bdll(root,a,b);
        return a;
    }
};
