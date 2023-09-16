class Solution {
public:
 int minMoves(int target, int maxDoubles) {
        int moves = 0;
        while(target != 1)
            if(target%2 == 0 && maxDoubles != 0){
                target = target/2;
                moves++;
                maxDoubles--;
            }
            else if(target%2 != 0 && maxDoubles != 0) {
                target--;
                moves++;
            }
            else{            
                moves += target-1;
                target = 1;
            }
            return moves;
        }
};