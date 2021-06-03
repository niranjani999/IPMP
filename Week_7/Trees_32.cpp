class Solution {
public:
    bool isCompleteTree(TreeNode* root) {
        queue<TreeNode *> q;      
        q.push(root);
        bool noChild = false;     
        while(!q.empty()){
           TreeNode *front=q.front();
           q.pop();
          if(front->left!= NULL){
                if(noChild==true) return false;
                   q.push(front->left);
            }      
           else noChild=true;
           if(front->right!=NULL){
               if(noChild==true) return false;
                    q.push(front->right);
              }
           else noChild=true;
          }
    
        return true;
      }
};    
