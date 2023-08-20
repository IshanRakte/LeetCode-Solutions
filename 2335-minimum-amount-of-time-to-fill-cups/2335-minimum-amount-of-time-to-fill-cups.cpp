class Solution {
public:
    int fillCups(vector<int>& amount) {
        int time = 0;
        while(true){
            sort(amount.begin(), amount.end());
            if(amount[2] > 0){
                amount[2]--;
                time++;
            }
            if(amount[1] > 0){
                amount[1]--;
            }
            else if(amount[2] == 0){
                break;
            }
        }
        return time;
    }
};