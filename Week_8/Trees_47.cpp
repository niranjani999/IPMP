class Solution {
public:
	int maxLevelSum(TreeNode* root) {
		if(root==NULL) return -1;
		int max = INT_MIN;
		int level = 0;
		int ans = 0;
		queue<TreeNode*> q;
		q.push(root);

		while(q.size()){
			int n = q.size();
			int sum = 0;
			level ++;
			for(int i=0; i<n; i++){
				TreeNode *curr = q.front();
				q.pop();
				sum += curr->val;
				if(curr->left) q.push(curr->left);
				if(curr->right) q.push(curr->right);
			}
			if(sum > max){
				max = sum;
				ans = level;
			}
		}
		return ans;
	}
};
