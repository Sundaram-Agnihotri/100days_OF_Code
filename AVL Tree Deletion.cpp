*/
class Sol
{
        Node root;
   static int height(Node N)
   {
       if (N == null)
           return 0;
       return N.height;
   }
   static int max(int a, int b)
   {
       return (a > b) ? a : b;
   }
   static Node rightRotate(Node y)
   {
       Node x = y.left;
       Node T2 = x.right;

       // Perform rotation
       x.right = y;
       y.left = T2;
       y.height = max(height(y.left), height(y.right)) + 1;
       x.height = max(height(x.left), height(x.right)) + 1;
       return x;
   }
   static Node leftRotate(Node x)
   {
       Node y = x.right;
       Node T2 = y.left;

       y.left = x;
       x.right = T2;

       x.height = max(height(x.left), height(x.right)) + 1;
       y.height = max(height(y.left), height(y.right)) + 1;

       return y;
   }
   static int getBalance(Node N)
   {
       if (N == null)
           return 0;
       return height(N.left) - height(N.right);
   }
   
    static Node minValueNode(Node node)
   {
       Node current = node;
       while (current.left != null)
       current = current.left;

       return current;
   }
   public static Node deleteNode(Node root, int key)
   {
       if (root == null)
           return root;
       if (key < root.data)
           root.left = deleteNode(root.left, key);
       else if (key > root.data)
           root.right = deleteNode(root.right, key);
       else
       {
           if ((root.left == null) || (root.right == null))
           {
               Node temp = null;
               if (temp == root.left)
                   temp = root.right;
               else
                   temp = root.left;
               if (temp == null)
               {
                   temp = root;
                   root = null;
               }
               else 
                   root = temp;
           }
           else
           {
               Node temp = minValueNode(root.right);
               root.data = temp.data;
               root.right = deleteNode(root.right, temp.data);
           }
       }
       if (root == null)
           return root;

       root.height = max(height(root.left), height(root.right)) + 1;

       int balance = getBalance(root);

       if (balance > 1 && getBalance(root.left) >= 0)
           return rightRotate(root);

       if (balance > 1 && getBalance(root.left) < 0)
       {
           root.left = leftRotate(root.left);
           return rightRotate(root);
       }
       if (balance < -1 && getBalance(root.right) <= 0)
           return leftRotate(root);
       if (balance < -1 && getBalance(root.right) > 0)
       {
           root.right = rightRotate(root.right);
           return leftRotate(root);
       }

       return root;
   }
}
