class NestedIterator {
public:
    vector<int> v;     
    int loc = 0;           
    
    void flatten(vector<NestedInteger> &nestedList)
    {
        for(auto x : nestedList)
        {
       
            if(x.isInteger())
                v.push_back(x.getInteger());
            

            else
                flatten(x.getList());
        }
        
    }
    
    NestedIterator(vector<NestedInteger> &nestedList) 
    {
      
        flatten(nestedList);
    }
    
    int next() 
    {

        return v[loc++];
    }
    
    bool hasNext() 
    {
   
        return (loc<v.size());
    }
};