class Solution {
public:
    int minimumEffort(vector<vector<int>>& tasks) {
    int res = 0;
    for (int i = 0; i < tasks.size(); ++i) {
        tasks[i][0] = tasks[i][1] - tasks[i][0];
    }
    sort(tasks.begin(), tasks.end());
    for (int i = 0; i < tasks.size(); ++i) {
        res = max(res + tasks[i][1] - tasks[i][0], tasks[i][1]);
    }
    return res;
    }
};