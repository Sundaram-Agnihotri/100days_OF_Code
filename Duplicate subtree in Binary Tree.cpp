 public:
    /*This function returns true if the tree contains 
    a duplicate subtree of size 2 or more else returns false*/
void trav(Node*root,vector<int>&v){
       if(root==NULL)return;
       v.push_back(root->data);
       trav(root->left,v);
       trav(root->right,v);
   }
   int dupSub(Node *root) {
       if(root==NULL)return 0;
       queue<Node*>q;
       q.push(root);
       map<vector<int>,int>vc;
       while(!q.empty()){
           Node*frnt=q.front();
           q.pop();
           vector<int>v;
           trav(frnt,v);
           if(v.size()>=2){
               vc[v]++;
               if(vc[v]==2)return 1;
           }
           if(frnt->left!=NULL){
               q.push(frnt->left);
           }
           if(frnt->right!=NULL){
               q.push(frnt->right);
           }
       }
       return 0;
    }
