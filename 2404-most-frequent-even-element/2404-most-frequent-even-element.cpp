class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        map<int, int> map;
        for(auto n: nums) map[n]++;
        int ans = -1, mx = -1;
        for(auto m: map){
            if(m.first%2 == 0 && m.second > mx){
                mx = m.second;
                ans = m.first;
            }
        }
        return ans;
    }
};