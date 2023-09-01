class Solution {
public:
    int maxConsecutiveAnswers(string answerKey, int k) {
        int start = 0, ans = 0, countT = 0, countF = 0;
        for(int i = 0; i < answerKey.size(); ++i){
           if(answerKey[i] == 'F') countF++;
           else countT++;
           while(min(countF, countT) > k){   
              if(answerKey[start] =='T') countT -= 1;
              else countF -= 1;
               start += 1;
           }  
                ans = max(ans, i-start + 1);
        } 
        return ans;
    }
};