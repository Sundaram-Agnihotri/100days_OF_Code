    Node *sortedInsert(struct Node* head, int data) {
        // Code here
        Node *ptr = new Node(data);
        Node *temp = head;
        if(head == NULL)
        {
            *head = NULL;
            return head;
        }
        
        if(head->data > ptr->data)
        {
            ptr->next = head;
            head = ptr;
        }
        else
        {
            while(temp->next != NULL && temp->next->data < data)
            {
                temp = temp->next;
            }
            
            ptr->next = temp->next;
            temp->next = ptr;
        }
        
        return head;
    }
