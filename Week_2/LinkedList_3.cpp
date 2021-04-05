#include<bits/stdc++.h>
using namespace std;
struct ListNode {
     int val;
     ListNode *next;
};
void printReverse(ListNode *head){
	if(head==NULL)
	   return;
	printReverse(head->next);
	cout<<head->val<<" ";
	
}
ListNode* insert(ListNode* head,int val){
	ListNode* temp = (ListNode*)malloc(sizeof(ListNode));
	temp->val = val;
	temp->next = NULL;
	if(head == NULL) head = temp;
	else{
		ListNode* p = head;
		while(p->next !=  NULL) p = p->next;
		p->next = temp;
	}
	return head;
}
int main()
{
	ListNode* head = NULL;
	head = insert(head,6);
	head = insert(head,9);
	head = insert(head,2);
	head = insert(head,5);
	head = insert(head,13);
	head = insert(head,7);
	printReverse(head);
}
