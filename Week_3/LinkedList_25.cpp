Node *swapkthnode(Node* head, int num, int K)
{
    // Your Code here
    if(num<K) return NULL;
    if (2 * K - 1 == num) return NULL;
    Node *p=head;
    Node *q=NULL;
    for(int i=1;i<K;i++){
        q=p;
        p=p->next;
    }
    Node *a=head;
    Node *b=NULL;
    for(int i=1;i<K;i++){
        b=a;
        a=a->next;
    }
    if(q) q->next=a;
    if(b) b->next=p;
    Node *temp=p->next;
    p->next=b->next;
    a->next=temp;
    if(K==1) head=a;
    if(K==num) head=p;
}
