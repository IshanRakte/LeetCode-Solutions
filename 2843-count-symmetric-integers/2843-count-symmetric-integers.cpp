class Solution {
public:
    int countSymmetricIntegers(int low, int high) {
        int count = 0; 
    
    for (int i = low; i <= high; ++i) { 
        string numAsString = to_string(i); 
        
        int sumLeftHalf = 0; 
        int numDigits = numAsString.size(); 
        for (int j = 0; j < numDigits / 2; ++j) {
            sumLeftHalf += numAsString[j] - numAsString[numDigits - j - 1]; 
        }
        if (numDigits % 2 == 0 && sumLeftHalf == 0) {
            count++; 
        }
    }
    return count;
    }
};