class Solution {
public:
    vector<vector<string>> suggestedProducts(vector<string>& products, string searchWord) {

	vector<vector<string>> search;
	sort(products.begin(), products.end());
	string temp = "";

	for(int i = 0; i < searchWord.length(); ++i) {
		temp.push_back(searchWord[i]); 
		vector<string> v;
		int cnt = 0;
		for(const string &a : products) {
			if(cnt == 3) 
				break;

			if(a.find(temp) == 0) {
				++cnt;
				v.push_back(a);
			}
		}
		search.push_back(v);
	}

	return search;
}
};