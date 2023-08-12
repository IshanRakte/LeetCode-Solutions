class Solution {
public:
    int timeToFinish(vector<int> piles, int rate) {
        int timeNeeded = 0;
        for (int i = 0; i < piles.size(); i++) {
            timeNeeded += piles[i] / rate;
            if (piles[i] % rate) {
                timeNeeded++;
            }
        }
        return timeNeeded;
    }

    int minEatingSpeed(vector<int>& piles, int h) {
        int minSpeed = 1;
        int maxSpeed = *max_element(piles.begin(), piles.end());
        int currentRate;
        
        while (minSpeed < maxSpeed) {
            currentRate = minSpeed + (maxSpeed - minSpeed) / 2;
            if (timeToFinish(piles, currentRate) <= h) {
                maxSpeed = currentRate;
            } else {
                minSpeed = currentRate + 1;
            }
        }
        
        return minSpeed;
    }
};
