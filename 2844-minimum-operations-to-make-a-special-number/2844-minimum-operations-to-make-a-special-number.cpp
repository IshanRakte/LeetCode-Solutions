class Solution {
public:
    int minimumOperations(string num) {
        int n = num.size(); 
        int mini = INT_MAX; 
       
        for (int i = 0; i < n - 1; i++) {
            string s = "";
            s += num[i]; 
            for (int j = i + 1; j < n; j++) {
                s += num[j]; 
                if (s == "00" || s == "50" || s == "25" || s == "75") {
                    int deletion = n - i - 2; 
                    mini = min(mini, deletion); 
                }
                s.pop_back(); 
            }
        }
        if (mini != INT_MAX) {
            return mini;
        }
        for (int i = 0; i < num.size(); i++) {
            if (num[i] == '0') {
                return n - 1;
            }
        }
        return n;
    }
};
