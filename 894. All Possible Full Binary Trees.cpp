vector<TreeNode*> allPossibleFBT(int n) {
        
        //a full binary tree is a tree in which either 0 children or 2 children of each parent node

        //base case if only 1 node present that is parent node
        if(n==1)
        return { new TreeNode(0)};

        vector<TreeNode*>ans;

        for(int i=1;i<n;i+=2){  //root node ko hata doo
      
         vector<TreeNode*>left = allPossibleFBT(i);  //left me only 1 node
         vector<TreeNode*>right = allPossibleFBT(n-i-1);   // right me bacchi huin nodes

         //traversing vector left and right

         for(auto l : left){
             for(auto r : right){
                 TreeNode* root = new TreeNode();

                 root->left = l;
                 root->right = r;
                 ans.push_back(root);
             }
         }

        }
        return ans;
    }
