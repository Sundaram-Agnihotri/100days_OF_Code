class Solution {
    int isPalindrome(String S) {
        // code here
        int s =0, e = S.length() -1;
        while(s<e){
            if(S.charAt(s)!=S.charAt(e))
            return 0;
            s++;
            e--;
        }
        return 1;
    }
};
