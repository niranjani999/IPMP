class Solution {
public:
    void hasCycle(ListNode *head) {
        if(head == NULL)return;
        ListNode* p=head;
        ListNode* f=head;
        while(f != NULL && f->next != NULL){
            p = p->next;
            f = f->next->next;
            if(p == f){
            	if(f==head){
            		while(p->next != f) p=p->next;
            		p->next=NULL;
				}
				else{
					p=head;
					while(p->next != f->next) p=p->next;
					f->next=NULL;
				}
			}
        }
        return;
    }
};
