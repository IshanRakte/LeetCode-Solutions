class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        sort(arr.begin(), arr.end());
        unordered_set<int> set;

        int count = 1;
        for (int i = 1; i < arr.size(); i++) {
            if (arr[i] == arr[i - 1])
                count++;
            else {
                if (set.count(count))
                    return false;

                set.insert(count);
                count = 1;
            }
        }
        if (set.count(count))
            return false;

        return true;
    }
};