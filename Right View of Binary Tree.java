class Solution{
    
    public void right(Node node , ArrayList<Integer> list, int level){
        if (node == null)
        return ;
        if (level == list.size())
        list.add(node.data);
        right (node.right, list, level+1);
        right (node.left, list, level+1);
    }
    //Function to return list containing elements of right view of binary tree.
    ArrayList<Integer> rightView(Node node) {
        ArrayList<Integer> list = new ArrayList<>();
        right(node, list, 0);
        return list;
    }
}
