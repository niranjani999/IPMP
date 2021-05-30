class Solution {
public:
    vector<int> pleaves(Node* root, vector<int> ans){
        if(root == NULL) return {};
        ans = pleaves(root->left, ans);
        if(root->left != NULL && root->right !=NULL) ans.push_back(root->data);
        ans = pleaves(root->right,ans);
        return ans;
    }
    vector<int> pLeft(Node* root, vector<int> ans){
        if(root == NULL) return {};
        if(root->left){
            ans.push_back(root->data);
            ans = pLeft(root->left,ans);
        }
        else if(root->right){
            ans.push_back(root->data);
            ans = pLeft(root->right,ans);
        }
        return ans;
    }
    vector<int> pRight(Node* root, vector<int> ans){
        if(root == NULL) return {};
        if(root->right){
            ans = pRight(root->right,ans);
            ans.push_back(root->data);
        }
        else if(root->left){
            ans = pRight(root->left,ans);
            ans.push_back(root->data);
            
        }
        return ans;
    }
    
    vector <int> printBoundary(Node *root)
    {
        //Your code here
        if(root == NULL) return {};
        vector<int> ans;
        ans.push_back(root->data);
        ans = pLeft(root->left,ans);
        ans = pleaves(root->left ,ans);
        ans = pleaves(root->right ,ans);
        ans = pRight(root->right ,ans);
        return ans;
    }
};
