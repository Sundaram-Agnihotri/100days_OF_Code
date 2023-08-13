

//User function Template for Java

//User function Template for Java
class Solution {
    static int nthFibonacci(int n){
        // code here
        int a=0;
        int b=1;
        if(n==0){
            return a;
        }
        int c;
        for(int i=2;i<=n;i++){
            c=(a+b)%1000000007;
            a=b;
            b=c;
        }
        
        return b;
    
    }
}
