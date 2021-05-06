class Solution {
public:
    int widthOfBinaryTree(TreeNode* root) {
        if(root==NULL)return 0;
        int res=1;
        queue<pair<TreeNode*, int>> q;
        q.push({root,0});
        while(!q.empty()){
            int n = q.size();
            int start = q.front().second;
            int end = q.back().second;
            res = max(res,end-start+1);
            for(int i=0;i<n;i++){
                pair<TreeNode* , int> p = q.front();
                int id = p.second-start;
                q.pop();
                if(p.first->left) q.push({p.first->left,2*id+1});
                if(p.first->right) q.push({p.first->right,2*id+2});
            }
        }
        return res;
    }
};
