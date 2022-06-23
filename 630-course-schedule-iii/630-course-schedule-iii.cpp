class Solution {
public:
    static bool comp(vector<int> &a, vector<int> &b) {
        return a[1] < b[1];
    }
    
    int scheduleCourse(vector<vector<int>>& courses) {
        sort(courses.begin(), courses.end(), comp);
        priority_queue<int> pq;
        int ans = 0, i = 0;
        int curr = 0;
        int n = courses.size();
        while(i < n) {
            if(curr + courses[i][0] <= courses[i][1]) {
                curr += courses[i][0];
                pq.push(courses[i][0]);
                ans += 1;
            }
            else {
                if(!pq.empty() && courses[i][0] < pq.top())  {
                    curr -= pq.top();
                    pq.pop();
                    curr += courses[i][0];
                    pq.push(courses[i][0]);
                }
            }
            i++;
        }
        return ans;
    }
};