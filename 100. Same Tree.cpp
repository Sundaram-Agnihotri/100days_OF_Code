class Solution {
public:
 vector<int>p1,q1;
    bool isSameTree(TreeNode* p, TreeNode* q) {
       
       
        tree(p,p1);
        tree(q,q1);
        
        if(p1.size()!=q1.size())
        {
            return false;
        }
       for(int i=0;i<p1.size();i++)
       {
           if(p1[i]!=q1[i])
           return false;
       }

        return true;
        
    }
    void tree(TreeNode* P,vector<int>&P1)
    {
        if(P==nullptr)
        {
           P1.push_back(INT_MIN) ;
        return;
        }
        P1.push_back(P->val);
        tree(P->left,P1);
        tree(P->right,P1);

    }
};
