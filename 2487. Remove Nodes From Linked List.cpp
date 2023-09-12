class Solution {
public:
    ListNode* removeNodes(ListNode* head) {
        stack<ListNode*>st;
        ListNode*cur=head;
        ListNode*pre=NULL;
        while(cur!=0)
        {
            int vel=cur->val;
            while(!st.empty() && st.top()->val <vel )
            {
                st.pop();
            }
            st.push(cur);
            cur=cur->next;

        }

        while(!st.empty())
        {
            cur=st.top();
            cur->next=pre;
            st.pop();

            pre=cur;


        }
        return pre;
        
    }
};
