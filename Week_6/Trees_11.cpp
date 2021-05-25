vector<int> reverseLevelOrder(Node *root)
{
    // code here
    vector<int> ans;
    stack<Node* > s1;
    queue<Node* > s2;
    s2.push(root);
    while(!s2.empty()){
        root = s2.front();
        s2.pop();
        s1.push(root);
        if(root->right != NULL) s2.push(root->right);
        if(root->left != NULL) s2.push(root->left);
    }
    while(!s1.empty()){
        root = s1.top();
        ans.push_back(root->data);
        s1.pop();
    }
    return ans;
}
