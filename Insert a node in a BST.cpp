
//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
#define MAX_HEIGHT 100000

// Tree Node
struct Node {
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};


// } Driver Code Ends
// Function to insert a node in a BST.

/*
struct Node {
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};
*/

class Solution
{
    public:
        
        bool solve(Node*root,int data){
            //base case
            if(!root)return 0;
            if(root->data==data)return 1;
            
            bool aage_ka_ans;
            if(root->data>data){
                aage_ka_ans=solve(root->left,data);
            }
            else{
                 aage_ka_ans=solve(root->right,data);
            }
            return aage_ka_ans;
            
        }
        void insertNode(Node*root,Node*temp){
            if(!root){
                return ;
            }
            if(root->data<temp->data){
                if(root->right==NULL){
                    root->right=temp;
                    return ;
                }
                else{
                    insertNode(root->right,temp);
                }
            }
            if(root->data>temp->data){
                if(root->left==NULL){
                    root->left=temp;
                    return ;
                }
                else{
                    insertNode(root->left,temp);
                }
            }
            
        }
        Node* insert(Node* node, int data) {
        
            // Your code goes here
            bool ans=solve(node ,data);
            if(ans)return node;
            
            Node*temp=new Node(data);
            
            insertNode(node,temp);
            
            return node;
            
            
            
            
            
            
            
            

    }

};

