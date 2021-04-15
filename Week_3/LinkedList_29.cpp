class Solution {
public:
    ListNode* merge(ListNode* h1, ListNode* h2){
 	ListNode* head = NULL;
 	if(h1->val <= h2->val){
 		head = h1; h1 = h1->next;
 	}
 	else head = h2 , h2 = h2->next;
 	ListNode* curr = head;
 	while(h1!=NULL && h2!=NULL){
 		if(h1->val <= h2->val){
 			curr->next = h1; curr = curr->next; h1 = h1->next;
 		}
 		else curr->next = h2,curr = curr->next,  h2 = h2->next;
 	}
 	if(h1 != NULL) curr->next = h1;
 	else if(h2 != NULL) curr->next = h2;
 	return head;
 }
 
 ListNode* sortList(ListNode* head) {
 	if(head == NULL) return head;
 	if(head->next == NULL) return head;
 	ListNode* fast = head;
 	ListNode* slow = head;
 	while(fast!= NULL && fast->next!=NULL){
 		slow = slow->next; fast = fast->next->next;
 	}
 	fast = head;
 	while(fast->next != slow) fast = fast->next;
 	fast->next = NULL;
 	// slow is the middle of the linked list
 	// basic partition and then merger
 	ListNode* h1 = sortList(head);
 	ListNode* h2 = sortList(slow);
 	return merge(h1,h2);
 }
};
