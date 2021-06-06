class Solution{
  public:
    // root : the root Node of the given BST
    // target : the target sum
    bool findp(struct Node *root,int& target,unordered_set<int> s ) {
        if(root==NULL)  return false;
        if(findp(root->left,target,s)) return true;
        if(s.find(target-root->data) != s.end()) return true;
        else s.insert(root->data);
        return findp(root->right,target,s);
        
    }
    int isPairPresent(struct Node *root, int target)
    {
        //add code here.
        unordered_set<int> s;
        if(!findp(root,target,s)) return 0;
        else return 1;
    }
};
