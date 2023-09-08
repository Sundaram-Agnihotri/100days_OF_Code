class Solution{
  public:
    // The given root is the root of the Binary Tree
    // Return the root of the generated BST
   void Inorder(Node* root, vector<int> &v){
        if(root==NULL){
            return ;
        }
        else{
            Inorder(root->left,v);
            v.push_back(root->data);
            Inorder(root->right,v);
        }
    }


    int index = 0;


    void MakeBST(Node* root, vector<int> &v){
        if(root==NULL){
            return ;
        }
        else{
            MakeBST(root->left, v);
            root->data = v[index];
            index++;
            MakeBST(root->right, v);   
        }
    }


    Node *binaryTreeToBST (Node *root)
    {
        //Your code goes here
        vector<int> v;
        Inorder(root, v);
        sort(v.begin(),v.end());
        MakeBST(root, v);
        return root;
        
    }
