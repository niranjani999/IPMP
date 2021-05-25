void populate(struct node* p,struct node **ref){
    if (p) {
        populate(p->right, ref);
        p->next = *ref;
        *ref = p;
        populate(p->left,ref);
    }
}
void populateNext(struct node* p)
{
   // Your code goes here
   node *next = NULL;
   populate(p,&next);
}
