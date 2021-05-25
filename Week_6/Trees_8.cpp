class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        if(!root) return {};
        vector<vector<int>> res;
        queue<TreeNode*> Q;
        Q.push(root);
        while(!Q.empty()){
            int count = Q.size();
            vector<int> level;
            for(int i=0;i<count;i++){
                TreeNode *node = Q.front();
                Q.pop();
                if(node->left) Q.push(node->left);
                if(node->right) Q.push(node->right);
                level.push_back(node->val);
            }
            res.push_back(level);
        }
        return res;
    }
};
