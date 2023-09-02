class Solution {
public:
    bool checkZeroOnes(string s) {
        int lenOne = 0;
        int lenZero = 0;
        int j = -1;
        for(int i = 0; i < s.size(); i++){
            if(s[i] == '0')
                j = i;
            lenOne = max(lenOne,i-j);
        }
        j = -1;
        for(int i = 0; i < s.size(); i++){
            if(s[i] == '1')
                j = i;
            lenZero = max(lenZero,i-j);
        }
        return lenOne>lenZero;
    }
};