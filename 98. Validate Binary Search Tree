/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
bool solve(TreeNode* root,long long int l,long long int u )
{
    if(root==NULL)
    return true;

    if(root->val>l && root->val<u && solve(root->left,l,root->val)&& solve(root->right,root->val,u))
    {
        // int lob=solve(root->left,l,root->val);
        // int upb=solve(root->right,root->val,u);
        // return lob && upb;
        return true;
    }
    else 
    return false;
}

    bool isValidBST(TreeNode* root) {
        long long int lowerb=-4294967296; // 2 to the power 32
         long long int upperb=4294967296;
         bool ans=solve(root,lowerb,upperb);
         return ans;
        
    }
};
