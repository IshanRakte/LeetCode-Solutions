class Solution {
public:
    bool isThree(int n) {
        int i = 1;
        int count = 0;
        while(i <= n){
            if(n%i==0){
                i++;
                count++;
            }
            else i++;
        }
        return count==3 ? true : false;
    }
};