class Spiral
{
    //Function to return a list containing the level order 
    //traversal in spiral form.	
    ArrayList<Integer> findSpiral(Node root) 
    {
        ArrayList<Integer> list = new ArrayList<>();
        Queue<Node> q = new LinkedList<>();
        if (root==null)
        return list;
        boolean rightToLeft = true;
        q.add(root);
        
        while (!q.isEmpty()){
        int size = q.size();
        int [] arr = new int [size];
        for (int i =0; i<size; i++){
            Node front = q.poll();
            int index = rightToLeft ? i : size-i-1;
            arr[index] = front.data;
            if (front.right!=null)
            q.add(front.right);
            if (front.left!=null)
            q.add(front.left);
            
        }
        rightToLeft=!rightToLeft;
        
        for (int i =0; i<arr.length; i++){
            list.add(arr[i]);
        }
        }
        return list;
        // Your code here
    }
}
