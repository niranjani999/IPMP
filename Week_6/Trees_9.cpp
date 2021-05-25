class Solution
{
    public:
    //Function to connect nodes at same level.
    Node* getNextRight(Node *root) { 
        Node *temp = root->nextRight; 
        while (temp != NULL) 
        { 
            if (temp->left != NULL)   return temp->left; 
            if (temp->right != NULL)  return temp->right; 
            temp = temp->nextRight; 
        }  
        return NULL; 
    }
    
    void connect(Node* root)
    {
       // Your Code Here
        Node *temp; 
        if (!root) 
        return; 
        root->nextRight = NULL; 
        while (root != NULL) 
        { 
            Node *q = root; 
            while (q != NULL) 
            { 
                if (q->left) { 
                    if (q->right)  q->left->nextRight = q->right; 
                    else q->left->nextRight = getNextRight(q); 
                } 
                if (q->right)   q->right->nextRight = getNextRight(q); 
                q = q->nextRight; 
            } 
            if (root->left)   root = root->left; 
            else if (root->right)  root = root->right; 
            else  root = getNextRight(root); 
        }
    }    
      
};
