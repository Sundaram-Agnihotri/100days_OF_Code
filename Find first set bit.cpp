  unsigned int getFirstSetBit(int n)
    {
        int count = 0;
        while(n > 0){
            if(n%2 == 1){
                return count + 1;
            }
            n = n/2;
            count++;
        }
        return count;
    }
