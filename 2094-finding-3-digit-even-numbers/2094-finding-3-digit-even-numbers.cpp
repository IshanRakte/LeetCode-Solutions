class Solution {
public:
    vector<int> findEvenNumbers(vector<int>& digits) {
        
        int freq[10] = {0};
        for(int i = 0; i < digits.size(); i++){
            freq[digits[i]]++;
        }
        vector<int> ans;
        for(int i = 1; i < 10; i++){
            if(freq[i]){
                for(int j = 0; j < 10; j++){
                    if(freq[j] > (i == j)){
                        for(int k = 0; k < 10; k += 2){
                            if(freq[k] > ((i == k) + (j == k))){
                                ans.push_back(i*100 + j*10 + k);
                            }
                        }
                    }
                }
            }
        }
        return ans;
    }
};