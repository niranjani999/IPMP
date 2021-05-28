class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        if(!root) return {};
        vector<vector<int>> res;
        deque<TreeNode* > Q;
        Q.push_back(root);
        bool reverse = true;
        while(!Q.empty()){
            int n = Q.size();
            vector<int> level;
            deque<TreeNode* > dq;
            for(int i=0;i<n;++i){
                TreeNode* n = Q.front();
                level.push_back(n->val);
                Q.pop_front();
                if(reverse){
                    if(n->left) dq.push_front(n->left);
                    if(n->right) dq.push_front(n->right);
                }
                else{
                    if(n->right)dq.push_front(n->right);
                    if(n->left) dq.push_front(n->left);
                }
            }
            Q.insert(Q.end(),dq.begin(),dq.end());
            res.push_back(level);
            reverse != reverse;
        }
        return res;
    }
};
