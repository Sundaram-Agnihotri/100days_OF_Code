

/*
class Node
    {
        int data;
        Node next;
        Node(int d) {data = d; next = null; }
    }
*/
class GfG
{
    //Function to remove duplicates from sorted linked list.
    Node removeDuplicates(Node head)
    {
	// Your code here	
	Node temp = head ;
	while (temp!=null && temp.next!=null){
	    if (temp.next.data == temp.data){
	        temp.next= temp.next.next;
	    }
	   else{
	        temp = temp.next;
	   }
	}
	return head;
    }
}
