int solve(Node root){
        if(root == null)
        return 0;
        
        int left = solve(root.left);
        int right = solve(root.right);
        
        return Math.max(left,right)+1;
    }
    boolean isBalanced(Node root)
    {
	// Your code here
	if(root == null)
	return true;
	
	
	int left = solve(root.left);
	int right = solve(root.right);
	
	if(Math.abs(left-right) <=1 && isBalanced(root.left) && isBalanced(root.right)){
	    return true;
	}
	
	return false;
