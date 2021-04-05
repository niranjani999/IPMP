class Solution {
public:
    ListNode* reverse(ListNode* head){
        ListNode* temp = NULL;
        while(head != NULL){
            ListNode* next = head->next;
            head->next = temp;
            temp = head;
            head = next;
        }
        return temp;
    }
public:
    bool isPalindrome(ListNode* head) {
        ListNode* f=head;
        ListNode* p=head;
        while(f->next !=NULL && f->next->next != NULL){
            p = p->next;
            f = f->next->next;
        }
        if(f != NULL) p = p->next;
        ListNode* rev = reverse(p);
        while(rev != NULL){
            if(rev->val != head->val) return false;
            else{
                rev = rev->next;
                head = head->next;
            }
        }
        return true;
    }
};
