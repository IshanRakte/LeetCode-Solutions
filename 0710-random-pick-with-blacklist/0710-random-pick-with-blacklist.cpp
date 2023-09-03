class Solution {
public:
    unordered_map<int, int> map;
    int valid_nums;
    Solution(int n, vector<int>& blacklist) {
        set<int> set;

        for (int i = 0; i < blacklist.size(); i++) {
            set.insert(blacklist[i]);
        }
        valid_nums = n - set.size();
        int index = valid_nums;

        for (int i = 0; i < blacklist.size(); i++) {
            int x = blacklist[i];
            if (x < valid_nums) {
                while (set.count(index)) {
                    index++;
                }
                map[x] = index++;
            }
        }
    }
    int pick() {
        int ans = rand() % valid_nums;
        if (map.count(ans)) {
            return map[ans];
        }
        return ans;
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(n, blacklist);
 * int param_1 = obj->pick();
 */