class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        vector<string> temp;
        while (heights.size() != 0) {
            int maxi = INT_MIN;
            int index = 0;
            for (int i = 0; i < heights.size(); i++) {
                if (heights[i] > maxi) {
                    maxi = heights[i];
                    index = i;
                }
            }
            temp.push_back(names[index]);
            heights.erase(heights.begin() + index);
            names.erase(names.begin() + index);
        }
        return temp;
    }
};