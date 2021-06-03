class Solution{
    public:
    //Function to convert a binary tree into its mirror tree.
    void mirror(Node* node)
    {
     // code here
     if(node == NULL) return;
     queue<Node*> q;
     q.push(node);
     while(!q.empty()){
         Node* c = q.front();
         q.pop();
         swap(c->left, c->right);
         if(c->left) q.push(c->left);
         if(c->right) q.push(c->right);
       }
    }
};
