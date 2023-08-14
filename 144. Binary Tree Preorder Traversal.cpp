class Solution {

public:
vector<int>ans;
    vector<int> preorderTraversal(TreeNode* root) {
        if(root==NULL)
        {
            return ans;

        }
        prioder(root);
        return ans;
        
    }

    void prioder(TreeNode*root)
    {
        
        ans.push_back(root->val);
        if(root->left)
        prioder(root->left);
        if(root->right)
         prioder(root->right);

    }
};
