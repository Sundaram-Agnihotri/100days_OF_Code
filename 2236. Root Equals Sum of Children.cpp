class Solution {
public:

    bool checkTree(TreeNode* root) {
        int s=root->left->val+root->right->val;
        if(s==root->val)
        return true;
        return false;
        //return (root->left->val+root->right->val==root->val);
    }
       
};
