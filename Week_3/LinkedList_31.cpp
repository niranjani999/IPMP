/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        Node *temp=head;
        while(temp != NULL){
            Node *copy = new Node(temp->val);
            copy->next = temp->next;
            temp->next=copy;
            temp=temp->next->next;
        }
        temp=head;
        while(temp != NULL){
            temp->next->random = temp->random == NULL? NULL: temp->random->next;
            temp=temp->next->next;
        }
        Node *p = new Node(-1);
        Node *q = p;
        temp=head;
        while(temp != NULL){
            q->next = temp->next;
            q=q->next;
            temp->next = temp->next->next;
            temp = temp->next;
        }
        return p->next;
    }
};
