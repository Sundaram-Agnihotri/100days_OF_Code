class Tree
{
    public static void inoder(Node root, ArrayList<Integer> list){
        if (root== null){
            return ;
        }
        inoder(root.left, list);
        list.add(root.data);
        inoder(root.right, list);
    }
    
    public static float findMedian(Node root)
    {
        ArrayList<Integer> list = new ArrayList<>();
        
        inoder(root, list);
        int size = list.size();
        
        if (size%2==0){
            int n = size/2;
            
            return ((float) (list.get(n) + list.get(n-1)))/2;
        }
        else 
        return list.get(size/2);
    }
}
