vector<int> Kdistance(struct Node *root, int k)
{
  // Your code here
  if(root == NULL) return {};
  vector<int> ans;
  if(k == 0)ans.push_back(root->data) ;
  else {
      Kdistance(root->left,k-1);
      Kdistance(root->right,k-1);
  }
  return ans;
}
