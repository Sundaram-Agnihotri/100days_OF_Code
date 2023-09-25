class Solution {
public:
    int getheight(TreeNode* root)
    {
        if(root==NULL)
            return 0;

       

       int  lh = getheight(root->left);
       int  rh = getheight(root->right);

        if(lh==-1 || rh==-1)
            return -1;
        if(abs(lh-rh)>1)
            return -1;
        return max(lh, rh)+1;
    }
    bool isBalanced(TreeNode* root) {
        int ans = getheight(root);
        if(ans==-1)
            return false;
        return true;
    }
    
};
