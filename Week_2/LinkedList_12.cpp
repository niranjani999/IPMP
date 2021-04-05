void deleteAlt(struct Node *head){
    // Code here
    if(head == NULL)return;
    struct Node* p = head;
    struct Node* temp = head->next;
    while(p !=NULL && temp != NULL){
        p->next = temp->next;
        free(temp);
        p=p->next;
        if(p != NULL)
          temp = p->next;
    }
}
