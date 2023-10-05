class Solution {
public:
    string strWithout3a3b(int a, int b) {
        string ans = "";
        while(a and b){
            if(a > b){
                ans += "aab";
                a -= 2;
                b--;
            }
            else if(b > a){
                ans += "bba";
                b -= 2;
                a--;
            }
            else{
                ans += "ab";
                a--;
                b--;
            }
        }
        while(a){
            ans += "a";
            a--;
        }
        
        while(b){
            ans += "b";
            b--;
        }
        return ans;
    }
};