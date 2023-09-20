class Solution {
public:
    ListNode* insertionSortList(ListNode* head) {
        ListNode* temp=head;
        vector<int>v;
        while( temp!=NULL )
        {
            v.push_back( temp->val );
            temp = temp->next;
        }
        sort( v.begin() ,  v.end() );
        ListNode* ans = NULL;
        ListNode* temp1 = ans;
        int n=v.size();
        for(int i=0 ; i<n ; i++ )
        {
            ListNode* newnode = new ListNode( v[i] );
            if( ans==NULL )
            {
                ans = newnode;
                temp1 = ans;
            }
            else
            {
                temp1->next = newnode;
                temp1 = temp1->next;
            }
        }
        return ans;
    }
};

