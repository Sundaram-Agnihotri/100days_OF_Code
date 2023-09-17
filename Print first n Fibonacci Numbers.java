class Solution
{
    //Function to return list containing first n fibonacci numbers.
    public static long[] printFibb(int n) 
    {
        
    long arr [] = new long [n];
    int k =0;
     if (n==1)
     {
    arr[0] =n;
    return arr;
     }
      arr[0] =1;
      arr[1] =1;
     for (int i =2; i<n ; i++){
         arr[i] = arr[i-1] + arr[i-2];
     }  
     return arr;
        
    }
 
}
