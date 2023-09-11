/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:

 int size(ListNode* head)
    {
        int s=0;
        while(head!=NULL)
        {
            s++;
           head = head->next;
        }
        return s;
    }

    ListNode* rotateRight(ListNode* head, int k) {
        if(head==NULL|| k==0)
        return head;
        int s=size(head);

        int loop=k%s;
        loop=s-loop;

        if(s==1||loop==s)
        return head;
        int j=0;
        ListNode*temp=head;
        ListNode*firstadd=head;
        while(temp!=0)
        {
            j++;
            if(j==loop)
            {
                firstadd=temp->next;
                temp->next=NULL;
                break;
            }
            temp=temp->next;
        }
temp=firstadd;
while(temp->next!=0)
{
    temp=temp->next;
}
temp->next=head;
return firstadd;
     
    }  
};
