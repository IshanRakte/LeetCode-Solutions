class BrowserHistory {
public:
    vector<string> v;
    int temp = 0;
    BrowserHistory(string homepage) {
        v.push_back(homepage);
        temp = v.size() - 1;
    }
    
    void visit(string url) {
        v.erase(v.begin() + temp + 1, v.end());
        v.push_back(url);
        temp = v.size() - 1;
    }
    
    string back(int steps) {
        if(steps > temp){
            temp = 0;
            return v[0];
        } 
        temp = temp - steps;
        return v[temp];
    }
    
    string forward(int steps) {
        if(steps > ((v.size()-1) - temp)){
            temp = v.size() - 1;
            return v[temp];
        } 
        temp = temp + steps;
        return v[temp];
    }
};

/**
 * Your BrowserHistory object will be instantiated and called as such:
 * BrowserHistory* obj = new BrowserHistory(homepage);
 * obj->visit(url);
 * string param_2 = obj->back(steps);
 * string param_3 = obj->forward(steps);
 */