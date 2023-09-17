class Solution {
public:
    ListNode* sortList(ListNode* head) {
        vector<int> v;
        if(head==NULL)
        return head;
        ListNode* p=head;
        int c=0;
        while(p!=NULL)
        {
            v.push_back(p->val);
            p=p->next;
            c++;
        }
        sort(v.begin(),v.end());
         ListNode*temp=new ListNode();
         temp->val=v[0];
         head=temp;
        for(int i=1;i<c;i++)
        {

        ListNode*dum=new ListNode();
        dum->val=v[i];
        temp->next=dum;
        temp=dum;
    
        }

        return head;
    }
};
