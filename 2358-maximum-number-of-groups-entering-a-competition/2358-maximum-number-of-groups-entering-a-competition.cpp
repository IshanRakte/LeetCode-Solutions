class Solution {
public:
    int maximumGroups(vector<int>& grades) {      
	int n = grades.size();  
	int groups = 0, sum = 0;

	while(sum + groups < n) {
		groups++;
		sum += groups;
	}
	return groups;
    }
};