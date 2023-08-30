 //Your code here
       if (x == 1)
        return head->next;
        
    Node* itr = head;
    for (int i = 1; i < x - 1; i++) {
        if (itr->next != NULL) {
            itr = itr->next;
        }
    }
    itr->next = itr->next->next;
    return head;
