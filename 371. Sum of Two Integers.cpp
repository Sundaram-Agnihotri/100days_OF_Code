class Solution {
public:
    int getSum(int a, int b) {
        int sumNoC=a^b;
        unsigned int carry=a&b;// also use it--- uint32_t carry=a&b;
        int realCarry=carry<<1;

        while(carry>0)
        {
            carry=realCarry&sumNoC;
            sumNoC=sumNoC^realCarry;
            realCarry=carry<<1;
            
            
        }
        return sumNoC;
      
        
    }
};
