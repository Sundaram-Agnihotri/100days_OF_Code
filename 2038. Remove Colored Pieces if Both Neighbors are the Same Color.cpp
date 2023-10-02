class Solution {
public:
    bool winnerOfGame(string colors) {
        
          int alice = 0;
        int bob = 0;

        for(int i=1;i<colors.size()-1;i++){

            int current = colors[i];
            int prev = colors[i-1];
            int next = colors[i+1];

            if(current == 'A' && prev == 'A' && next == 'A'){
                alice++;
            }

            else if(current == 'B' && prev == 'B' && next == 'B'){
                bob++;
            }
        }


        return alice > bob;
    }
};
