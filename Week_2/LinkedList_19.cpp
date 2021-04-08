bool isVowel(char x)
{
    return (x == 'a' || x == 'e' || x == 'i' ||
            x == 'o' || x == 'u');
}
struct Node* arrange(Node *head)
{
   //Code here
   Node *p = head;
   Node *next;
   Node *temp = head;
   if(head==NULL) return NULL;
   if (isVowel(head->data))next = head;
   else
    {   while (temp->next != NULL && !isVowel(temp->next->data)) temp = temp->next;
        if (temp->next == NULL) return head;
        next = p = temp->next;
        temp->next = temp->next->next;
        next->next = head;
    }
    while (temp != NULL && temp->next != NULL)
    {
        if (isVowel(temp->next->data))
        {
            if (temp == next) next = temp = temp->next;
            else{
                Node *q = next->next;
                next->next = temp->next;
                next = next->next;
                temp->next = temp->next->next;
                next->next = q;
            }
        }
        else temp = temp->next;
    }
   return p;
}
