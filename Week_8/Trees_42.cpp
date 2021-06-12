//Function to return a list of BST elements in a given range.
vector<int> printNearNodes(Node *root, int low, int high)
{
  // your code goes here
  vector<int> v;
  if(root==NULL) return {};
  if(low<root->data) printNearNodes(root->left,low,high);
  if(high > root->data) printNearNodes(root->right,low,high);
  if(low<=root->data && high>=root->data){
      v.push_back(root->data);
      cout<<root->data<<" ";
  }
  return v;
}
