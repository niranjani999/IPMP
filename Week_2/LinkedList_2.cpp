class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode *temp=head;
        ListNode *p=NULL,*next;
        while(temp != NULL){
            next = temp->next;
            temp->next = p;
            p = temp;
            temp = next;
        }
        head = p;
        return head;
    }
};
