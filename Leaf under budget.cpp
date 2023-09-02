 int getCount(Node *root, int k)
    {
        queue<Node*> q;
        q.push(root);
        int count = 0;
        int level = 0;
        int sum = 0;
        while(q.size() != 0){
            int size = q.size();
            level++;
            for(int i=0; i<size; i++){
                Node* front = q.front();
                q.pop();
                if(front->left == NULL && front->right == NULL){
                    if(level + sum <= k){
                        sum += level;
                        count++;
                    }
                }
                if(front->left != NULL){
                    q.push(front->left);
                }
                if(front->right != NULL){
                    q.push(front->right);
                }
            }
        }
        return count;
    }
