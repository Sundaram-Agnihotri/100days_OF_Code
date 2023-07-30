class Solution
{
    // returns the inorder successor of the Node x in BST (rooted at 'root')
	public Node inorderSuccessor(Node root,Node x)
         {
          //add code here.
          Node ans = null;
          while (root!=null){
              if (x.data>=root.data)
              root= root.right;
              
          else{
              ans = root;
              root= root.left;
          }
          
         }
             return ans;
         }            
}
