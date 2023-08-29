Node compute(Node head)
    {
        // your code here
         if(head.next == null)
        return head;
        
        Node temp = compute(head.next);
        
        if(temp.data <= head.data){
            head.next = temp;
            return head;
        }
        
        return temp;
    }
