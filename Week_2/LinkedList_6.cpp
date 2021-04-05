class Solution {
public:
    bool hasCycle(ListNode *head) {
        if(head == NULL)return false;
        ListNode* p=head;
        ListNode* f=head;
        while(f != NULL && f->next != NULL){
            p = p->next;
            f = f->next->next;
            if(p == f)return true;
        }
        return false;
    }
};
