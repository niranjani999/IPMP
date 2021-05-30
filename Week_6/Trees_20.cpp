vector<int> leftView(Node *root)
{
   // Your code here
   if(root == NULL) return {};
   queue<Node* > q;
   q.push(root);
   vector<int> ans;
   while(!q.empty()){
       int n = q.size();
       for(int i=1;i<=n;i++){
           Node* temp = q.front();
           q.pop();
           if(i==1)ans.push_back(temp->data);
           if(temp->left != NULL) q.push(temp->left);
           if(temp->right != NULL) q.push(temp->right);
       }
   }
   return ans;
}
