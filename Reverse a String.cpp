 string reverseWord(string str)
    {
        // Your code goes here
       int n = str.size();
        for (int i = 0; i < n/2; i++){
            char temp = str[i];
            str[i] = str[n-1-i];
            str[n-i-1] = temp;
        }
        return str;
    }
