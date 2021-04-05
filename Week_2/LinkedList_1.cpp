//Function to find the data of nth node from the end of a linked list.
int getNthFromLast(Node *head, int n)
{
       // Your code here
       Node* p=head;
       Node* f=head;
       while(n>0){
           f = f->next;
           n--;
       }
       while(f != NULL){
           f = f->next;
           p = p->next;
       }
       return p->data;
}
