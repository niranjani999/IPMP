void alternatingSplitList(struct Node* head) 
{
    //Your code here
    if(head==NULL || head->next == NULL)return;
    struct Node* temp1;
    struct Node* temp2;
    a=temp1=head;
    b=temp2=head->next;
    head=head->next->next;
    while(head != NULL && head->next != NULL){
        temp1->next=head;
        temp2->next=head->next;
        temp1=temp1->next;
        temp2=temp2->next;
    }
    if(head!=NULL){
        temp1->next=head;
        temp1=temp1->next;
    }
    temp1->next=NULL;
    temp2->next=NULL;
}
