class Solution {
public:
TreeNode* sortedListToBST(ListNode* head) {
       return newBST(head,NULL);
}
TreeNode* newBST(ListNode* head, ListNode* tail){
       if(head==tail)
       return NULL;
       ListNode* fast=head;
       ListNode* slow=head;
       while(fast != tail &&fast->next != tail){
             slow=slow->next;
             fast=fast->next->next;
       }
       TreeNode* root=new TreeNode(slow->val);
       root->left=newBST(head,slow);
       root->right=newBST(slow->next,tail);
       return root;
}
};
