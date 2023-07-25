class Solution
{
    //Function to sort a linked list of 0s, 1s and 2s.
    static Node segregate(Node head)
    {
        int zero=0;
        int one = 0;
        int two = 0;
        Node curr = head;
        while (curr!= null){
            if (curr.data ==0)
            zero++;
            else if (curr.data==1)
            one++;
            else if(curr.data==2)
            two++;
            curr = curr.next;
        }
        curr = head;
        while (curr!=null){
            if(zero!=0){
                curr.data=0;
                zero--;
            }
            else if(one!=0){
                curr.data=1;
                one--;
            }
            else if(two!=0){
                curr.data= 2;
            }
            curr= curr.next;
        }
        
        return head;
    }
