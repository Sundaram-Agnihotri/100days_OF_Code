Node* pairWiseSwap(struct Node* head) 
    {
        // The task is to complete this method
        if(head == NULL || head->next == NULL)
        return head;
        
        Node* temp = head->next->next;
        Node* t = head->next;
        
        t->next = head;
        
        head->next = pairWiseSwap(temp);
        
        return t;
