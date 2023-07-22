class Solution
{
    public:
    //Function to remove duplicates from unsorted linked list.
    Node * removeDuplicates( Node *head) 
    {
      map<int,bool>mp;
      
      Node* start = head;
      Node* tmp = start;
      
      while(start!=NULL){
          if(mp[start->data]==false)
          {
              mp[start->data] = true;
              tmp = start;
              start = start->next;
          }
          
          else{
              Node* del = tmp->next;
              delete(del);
              tmp->next = start->next;
              start = start->next;
          }
      }
      
      return head;
     
    }
};
