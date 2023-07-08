class Solution {
public:
    int distanceTraveled(int mainTank, int additionalTank) {
     
      if(mainTank < 5) return mainTank * 10;
        
      int ans = 0;
      while(mainTank / 5 >= 1 && additionalTank > 0){
          mainTank = mainTank - 5;
          ans += 50;
          mainTank += 1;
          additionalTank--;
      }
        if(mainTank){
            ans += mainTank * 10;
        }
        return ans;
    }
};