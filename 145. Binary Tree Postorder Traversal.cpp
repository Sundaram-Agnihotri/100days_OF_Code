class Solution {
public:
vector<int>ans;
    vector<int> postorderTraversal(TreeNode* root) {
        
        postoder(root);
        return ans;
        
    }

    void postoder(TreeNode*root)
    {
        if(root==NULL)
        {
            return ;

        }
        
        
        if(root->left)
        postoder(root->left);
        if(root->right)
         postoder(root->right);
         ans.push_back(root->val);

    }
        
    
};
