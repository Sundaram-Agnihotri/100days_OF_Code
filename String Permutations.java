class Solution
{    
    static ArrayList<String> list=new ArrayList<>();
    public ArrayList<String> permutation(String S)
    {   list.clear();
        perm(S,"");
        Collections.sort(list);
        return list;
    }
    static boolean perm(String str,String ans){
        if(str.length()==0)  return list.add(ans);
        for(int i=0;i<str.length();i++) perm(str.substring(0,i)+str.substring(i+1),ans+str.charAt(i)); 
        return true;
    }
}
