// Last updated: 21/05/2026, 18:10:20
class Solution {
public:
    bool winnerOfGame(string colors) {
        int Alice = 0 , Bob = 0 ;
        for ( int i = 1 ; i <= colors.size ()-1 ; i++){
            if (colors[i] == 'A' && colors[i+1] == 'A' && colors[i-1] == 'A'){
                Alice ++;
            }
            if (colors[i] == 'B' && colors[i+1] == 'B' && colors[i-1] == 'B'){
                Bob++;
            }
        }
        return Alice>Bob;
    }
};