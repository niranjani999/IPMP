class Solution{
  public:
    void verti(Node *root, int hd, map<int, int> &m)
    {
        if (root == NULL) return;
        verti(root->left, hd-1, m);
        m[hd] += root->data;
        verti(root->right, hd+1, m);
    }
    vector <int> verticalSum(Node *root) {
        // add code here.
        vector<int> ans;
        map<int,int> m;
        verti(root,0,m);
        for(auto it=m.begin();it!=m.end();it++){
            ans.push_back(it->second);
        }
       return ans; 
    }
};
