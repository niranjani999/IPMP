class Solution
{
    public:
    struct node *reverse (struct node *head, int k)
    { 
        // Complete this method
        node* temp = head; 
        node* next; 
        node* prev = NULL; 
        int count = 0; 
        while (temp != NULL && count < k) 
        { 
        next = temp->next; 
        temp->next = prev; 
        prev = temp; 
        temp = next; 
        count++; 
        } 
        if(head != NULL) 
        head->next = temp; 
        count = 0; 
        while(count < k-1 && temp != NULL ) 
        { 
        temp = temp->next; 
        count++; 
        } 
        if(temp != NULL) 
        temp->next = reverse(temp->next, k); 
        return prev;
    }
};
