class Store{
    int s;
    Store(int s){
        this.s = s;
    }
}

//for static p value

class Solution
{
    public Node solve(Node root,Store p,int node){
        
        if(root == null){
            return null;
        }
        if(root.data == node){
            return root;
        }
        root.left = solve(root.left,p,node);
        root.right = solve(root.right,p,node);
        if(root.left !=null  && root.right==null){
            p.s--;
            if(p.s<=0){
                p.s = Integer.MAX_VALUE;
                return root;
            }
            return root.left;
        }
        if(root.left == null  && root.right!=null){
            p.s--;
            if(p.s<=0){
                p.s = Integer.MAX_VALUE;
                return root;
            }
            return root.right;
        }
        
        return null;
    }
    public int kthAncestor(Node root, int k, int node)
    {
     Store p = new Store(k);
        Node ans = solve(root,p,node);
        if(ans == null || ans.data == node){
            return -1;
        }
            return ans.data;
    }
}
