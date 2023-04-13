class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
        int ans{};
        for(int i = 0; i < arr.size(); i++) {
        int start = i;
        int end = arr.size() - i;
        int total = (start + 1) * (end);
        int odd = total / 2;
        if(total % 2 != 0) {
                odd++;
        }
            ans += arr[i] * odd;
        }
        return ans;
    }
};