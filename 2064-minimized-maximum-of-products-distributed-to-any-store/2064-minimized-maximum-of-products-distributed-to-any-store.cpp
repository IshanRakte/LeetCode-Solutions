class Solution {
public:
    int minimizedMaximum(int n, vector<int>& quantities) {
        
    int m = quantities.size();
    int l = 1, r = 0;
    for (int i = 0; i < m; i++) {
        r = max(r, quantities[i]);
    }
    int mid = 0, ans = 0;
    while (l <= r) {
        mid = (l + r) / 2;
        int count = 0;
        for (int i = 0; i < m; i++) {
            count += quantities[i] / mid;
            if (quantities[i] % mid) {
                count++;
            }
        }
        if (count <= n) {
            ans = mid;
            r = mid - 1;
        } else {
            l = mid + 1;
        }
    }
    return ans;
    }
};