class Solution {
        boolean allnine(int [] arr, int n){
            for (int i =0; i<n; i++){
                if (arr[i]!=9)
                return false;
            }
            return true;
        }
    Vector<Integer> generateNextPalindrome(int num[], int n) {
        if(allnine(num, n)){
           Vector<Integer> ans = new Vector<>();
            ans.add(1);
            for (int i =0; i<n-1; i++){
                ans.add(0);
            }
            ans.add(1);
            return ans;
        }
        else if (n%2!=0){
            boolean flag = false ;
             for (int i =0; i< n/2; i++){
                 if (num[i]>num[n-i-1])
                 flag = true;
                 else if (num[i]== num[n-i-1])
                 continue;
                 else 
                 flag = false;
             
                 num[n-i-1] = num[i];
             }
             if (flag == false){
                 int j =0;
                 for (; j<n/2-1; j++){
                     if (num[n/2-j]==9){
                         num[n/2-j]=0;
                         num[n/2+j]=0;
                     }
                     else
                     break;
                 }
                 if (j==0){
                     num[n/2-j]++;
                 }
                 else{
                     num[n/2-j]++;
                     num[n/2+j]++;
                     
                 }
             }
             
             
        }
        else {
            boolean flag = false ;
             for (int i =0; i< n/2; i++){
                 if (num[i]>num[n-i-1])
                 flag = true;
                 else if (num[i]== num[n-i-1])
                 continue;
                 else 
                 flag = false;
             
                 num[n-i-1] = num[i];
             }
             if (flag == false){
                 int j =0;
                 for (; j<n/2-1; j++){
                     if (num[n/2-j-1]==9){
                         num[n/2-j-1]=0;
                         num[n/2+j]=0;
                     }
                     else
                     break;
                 }
                   num[n/2-j-1]++;
                   num[n/2+j]++;
        }
        }
            Vector<Integer> ans = new Vector<>();
            for (int i =0; i< n; i++){
               ans.add(num[i]);
            }
            return ans;
    }
}
