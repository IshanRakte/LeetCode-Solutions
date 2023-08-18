class Solution {
public:
    int minPartitions(string n) {
        int ans = 0;
        for(int i = 0; i < n.size(); i++){
            if(n[i] - '0' > ans){
               ans = n[i] -'0';
            }
        }
        return ans;
    }
};