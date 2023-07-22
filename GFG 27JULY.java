class Solution
{
    //Function to remove duplicates from unsorted linked list.  
    public Node removeDuplicates(Node head) 
    {
         // Your code here
         HashSet<Integer> hs = new HashSet<>();
         
        Node curr = head;
        Node pre = null;
         
        while (curr!=null){
            int data = curr.data;
            
            if (hs.contains(data))
            pre.next = curr.next;
            else {
                hs.add(data);
                pre = curr;
            }
            curr = curr.next;
        }
        return head;
    }
}
