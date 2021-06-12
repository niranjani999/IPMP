/* The function should print all the paths from root
 to leaf nodes of the binary tree */
void check(Node* root, vector<int> a, vector<vector<int>>& v){
    if(root==NULL) return;
    a.push_back(root->data);
    if(root->left==NULL && root->right==NULL) {
        v.push_back(a);
    }
    check(root->left,a,v);
    check(root->right,a,v);
}
vector<vector<int>> Paths(Node* root)
{
    // Code here
    vector<vector<int>> v;
    if(root==NULL) return v;
    vector<int> a;
    check(root,a,v);
    return v;
}
