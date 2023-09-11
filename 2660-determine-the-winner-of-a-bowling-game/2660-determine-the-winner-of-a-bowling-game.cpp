class Solution {
public:
    int isWinner(vector<int>& player1, vector<int>& player2) {
        int p1 = 0, p2 = 0;

        for(int i = 0; i < player1.size(); i++){
            if((i >= 1 && player1[i-1] == 10) || (i >= 2 && player1[i-2] == 10)){
                p1 += 2*player1[i];
            }
            else{
                p1 += player1[i];
            }
        }
        for(int i=0; i < player2.size(); i++){
            if((i >= 1 && player2[i-1] == 10) || (i >= 2 && player2[i-2] == 10)){
                p2 += 2*player2[i];
            }
            else{
                p2 += player2[i];
            }
        }
        if(p1 > p2){
            return 1;
        }
        else if(p1 == p2){
            return 0;
        }
        return 2;
    }
};