class Solution {
public:
    long long numberOfWays(string s) {
        int count0 = 0, count1 = 0;
        for(int i = 0; i < s.size(); i++){
        if(s[i] == '0')
            count0++;
        else
            count1++;
    }
    long long int ans = 0;
    int cur0 = 0, cur1 = 0;
    for(int i = 0; i < s.size(); i++){
        if(s[i] == '1'){
            cur1++;
            ans += cur0 * (count0 - cur0);
        }
        else{
            cur0++;
            ans += cur1 * (count1 - cur1);
        }
    }
    return ans;
    }
};