class Solution {
public:
    long long putMarbles(vector<int>& weights, int k) {
        int n = weights.size();
        vector<int> pairs(n - 1);
        
        for(int i = 1; i < n; i++){
            pairs[i - 1] = weights[i] + weights[i - 1];
        }
        sort(pairs.begin(), pairs.end());
        
        long min = 0;
        long max = 0;
        
        for(int i = 0; i < k - 1; i++){
            min += pairs[i];
            max += pairs[n - i - 2];
        }
        return max - min;
    }
};