 boolean isIsomorphic(Node root1, Node root2)  
    { 
         // code here.
             if(root1==null&&root2==null)
         return true;
         
         else if(root1==null || root2==null)
         return false;
         
         if(root1.data!=root2.data)return false;
         
         boolean b1=isIsomorphic(root1.left,root2.left);
         boolean b2=isIsomorphic(root1.right,root2.right);
         boolean b3=isIsomorphic(root1.left,root2.right);
         boolean b4=isIsomorphic(root1.right,root2.left);
         
         return ((b1&&b2)||(b3&&b4));
    }
