class Solution
{
   private:
    void solve(Node* root, vector<int> &v){
        if(root == NULL){
            return;
        }
        
        solve(root->left, v);
        v.push_back(root->data);
        solve(root->right, v);
    }
    public:
    int kthLargest(Node *root, int K)
    {
        vector<int> v;
        solve(root,v);
        int size = v.size()-1;
        
        return v[size-K+1];
    }
