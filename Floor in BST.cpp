public:
    int floor(Node* root, int x) {
        // Code here
        int curr = -1;
        
        while(root!=NULL){
            if(root->data <= x){
                curr = root->data;
                root = root->right;
            }
            else{
                root = root->left;
            }
        }
        
        return curr;
    }
