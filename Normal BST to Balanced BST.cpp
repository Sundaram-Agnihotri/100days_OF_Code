 void inorder(Node * root,vector<int> &v)
    {
        if(root==0)
            return;
        inorder(root->left,v);
        v.push_back(root->data);
        inorder(root->right,v);
    }
    
    Node * conbtree(vector<int> &v,int s,int e)
    {
        if(s>=e)
            return NULL;
        int mid=(s+e)/2;
        
        Node *root=new Node(v[mid]);
        root->left=conbtree(v,s,mid);
        root->right=conbtree(v,mid+1,e);
        
        return root;
    }
    
    Node* buildBalancedTree(Node* root)
    {
        vector<int> v;
        inorder(root,v);
        
        return conbtree(v,0,v.size());
    }
