class Solution {
public:
    bool isReachable(int targetX, int targetY) {
        int i = __gcd(targetX, targetY);
        while(i % 2 == 0){
            i = i / 2;
        } 
        return i == 1;
    }
};