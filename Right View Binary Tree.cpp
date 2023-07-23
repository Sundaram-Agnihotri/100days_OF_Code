    //Function to return list containing elements of right view of binary tree.
 void postorderTraversal(Node* root, vector<int> &ans, int level){
        if(root==NULL){
            return;
        }
        
        if(ans.size() == level){
            ans.push_back(root->data);
        }
        
        postorderTraversal(root->right, ans, level+1);
        postorderTraversal(root->left , ans, level+1);
    }
    
    vector<int> rightView(Node *root)
    {
       vector<int> ans;
       postorderTraversal(root, ans, 0);
       return ans;
    }
