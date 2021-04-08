#include<bits/stdc++.h>
using namespace std;
struct ListNode {
    int data;
    struct ListNode* next;
};
bool isPresent(struct ListNode* head, int data)
{
    struct ListNode* t = head;
    while (t != NULL) {
        if (t->data == data) return 1;
        t = t->next;
    }
    return 0;
}
void push(struct ListNode** head_ref, int new_data)
{
    struct ListNode* new_node= (struct ListNode*)malloc(sizeof(struct ListNode));
    new_node->data = new_data;
    new_node->next = (*head_ref);
    (*head_ref) = new_node;
}
struct ListNode* getUnion(struct ListNode* head1,struct ListNode* head2)
{
    struct ListNode* result = NULL;
    struct ListNode *t1 = head1, *t2 = head2;
    while (t1 != NULL) {
        push(&result, t1->data);
        t1 = t1->next;
    }
    while (t2 != NULL) {
        if (!isPresent(result, t2->data)) push(&result, t2->data);
        t2 = t2->next;
    }
    return result;
}
void printList(struct ListNode* node)
{
    while (node != NULL) {
        cout << " " << node->data;
        node = node->next;
    }
}
int main()
{
    struct ListNode* head1 = NULL;
    struct ListNode* head2 = NULL;
    struct ListNode* intersecn = NULL;
    struct ListNode* unin = NULL;
    push(&head1, 2);
    push(&head1, 10);
    push(&head1, 20);
    push(&head1, 6);
    push(&head1, 8);
    push(&head2, 6);
    push(&head2, 40);
    push(&head2, 55);
    push(&head2, 10);
    push(&head2, 30);
    unin = getUnion(head1, head2);
    cout << "\nList 1 : ";
    printList(head1);
    cout << "\nList 2 : ";
    printList(head2);
    cout << "\n\nUnion : ";
    printList(unin);
    return 0;
}
