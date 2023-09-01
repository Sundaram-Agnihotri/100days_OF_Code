 public static void printCorner(Node node)
    {
        
        // add your code here    
        Queue<Node>q = new LinkedList<>();
        q.add(node);
        
        while(q.size()>0){
            int n = q.size();
            
            for(int i=0;i<n;i++){
                
                Node a = q.remove();
                
                if(i==0 || i==n-1){
                    System.out.print(a.data + " ");
                }
                
                if(a.left!=null){
                    q.add(a.left);
                }
                
                if(a.right!=null){
                    q.add(a.right);
                }
            }
        }
    }
