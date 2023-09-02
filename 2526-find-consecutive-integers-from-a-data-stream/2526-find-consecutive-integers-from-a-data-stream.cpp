class DataStream {
public:
    int x, y, z;
    DataStream(int value, int k) {
        x = value, y = k, z=0;
    }
    
    bool consec(int num) {
        if(x == num){
            z++;
            return (z >= y);
        }
        z = 0;
        return false;
    }
};
/**
 * Your DataStream object will be instantiated and called as such:
 * DataStream* obj = new DataStream(value, k);
 * bool param_1 = obj->consec(num);
 */