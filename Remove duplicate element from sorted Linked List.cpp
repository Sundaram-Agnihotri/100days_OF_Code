Node *removeDuplicates(Node *head)
{
 // your code goes here
  // your code goes here
 if(head == NULL)
    return NULL;
    
    Node* curr = head;
    while(curr!=NULL && curr->next!=NULL)
    {
        if(curr->data==curr->next->data)
        {
            curr->next = curr->next->next;
        }
            else
            {
                curr = curr->next;
            }
    }
    return head;
}
