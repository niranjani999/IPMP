class Solution {
public:
    ListNode* reverseKGroup(ListNode* head, int k) {
        if(head==NULL)
            return NULL;
        ListNode* temp=head;
        ListNode* prev=NULL;
        ListNode* next=NULL;
        int count=0;
        while(temp!=NULL && count<k){
            next = temp->next;
            temp->next = prev;
            prev = temp;
            temp = next;
            count++;
        }
        if(next!=NULL)
            head->next = reverseKGroup(next,k);
        return prev;
    }
};
