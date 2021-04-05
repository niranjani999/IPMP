class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode* p=head;
        ListNode* temp=head;
        while(temp != NULL && temp->next != NULL){
            p = p->next;
            temp=temp->next->next;
        }
        return p;
    }
};
