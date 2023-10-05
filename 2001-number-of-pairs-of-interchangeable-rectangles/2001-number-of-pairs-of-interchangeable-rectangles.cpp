class Solution {
public:
    long long interchangeableRectangles(vector<vector<int>>& rectangles) {
        long long count = 0;
        unordered_map<double,int> map;
        for(int i = 0; i < rectangles.size(); i++) {
            double temp = (double)rectangles[i][0] / rectangles[i][1];
            if(map.find(temp) != map.end()) {
                count += map[temp];
                map[temp]++;
            }
            else {
                map[temp] = 1;
            }
        }
        return count;
    }
};