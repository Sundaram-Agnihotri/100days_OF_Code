class Solution {
public:
    TreeNode* invertTree(TreeNode* root) {
        if(root==NULL)
        return NULL;
        TreeNode* tem = root->right;
         root->right = root->left;
         root->left = tem;

        invertTree(root->left);
        invertTree(root->right);
        return root;
        
    }
    
};
