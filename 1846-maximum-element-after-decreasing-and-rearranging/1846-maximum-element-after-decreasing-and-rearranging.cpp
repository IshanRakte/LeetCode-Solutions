class Solution {
public:
    int maximumElementAfterDecrementingAndRearranging(vector<int>& arr) {
        sort(arr.begin(), arr.end());
        int ans = 0;
        int temp = 1;
        for(int i = 0; i < arr.size(); i++){
            if(arr[i] >= temp){ 
                ans = max(ans, temp);
                temp++;
            }
        }
        return ans;
    }
};