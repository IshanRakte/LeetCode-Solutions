class Solution {
public:
    vector<int> sortByBits(vector<int>& arr) {
        
        sort(arr.begin(), arr.end(), [](int a, int b) {            
            int A = bitset<32>(a).count();
            int B = bitset<32>(b).count();
            
            return A != B ? A < B : a < b;
        });
        
        return arr;
    }
};