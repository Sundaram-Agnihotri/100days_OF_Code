class Solution {
public:
int ans=0;
void pathoneroot(TreeNode* root,long long sum)
{
    if(!root) return;
    if(sum==root->val)
    {
        ++ans;
    }
    pathoneroot(root->left, sum-root->val);
    pathoneroot(root->right, sum-root->val);
}
    int pathSum(TreeNode* root, long long targetSum) {
        if(root){
        pathoneroot(root,targetSum);
        pathSum(root->left, targetSum);
        pathSum(root->right, targetSum);
        }
         return ans;
        
    }
   
};
