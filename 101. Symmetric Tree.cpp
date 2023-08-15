class Solution {
public:
bool tree(TreeNode* P,TreeNode* Q)
    {
        
       if(P!=NULL && Q!=NULL)
       {


       
       bool a= tree(P->left,Q->right);
       bool b= tree(P->right,Q->left);

       if((P->val==Q->val) && a && b)
       {
           return true;
       }
       else
       return false;

        
        
    }
    else if(P==NULL && Q==NULL)
    {
        return true;
    }
    else
    return false;
    }

    bool isSymmetric(TreeNode* root) {
        if(root==NULL)
        return true;

      return tree(root->left,root->right);
        
    }

};
