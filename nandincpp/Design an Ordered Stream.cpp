class OrderedStream {
    vector<string> os;
    int x;
public:
    OrderedStream(int n) 
    {
        os.resize(n);
        x = 0;
    }
    
    vector<string> insert(int idKey, string value)
    {
        os[idKey - 1] = value;
        
        int start = x;
        
        while(x<os.size() && !os[x].empty())
            x++;
        
        return vector<string>(os.begin()+start, os.begin()+x);
    }
};

/**
 * Your OrderedStream object will be instantiated and called as such:
 * OrderedStream* obj = new OrderedStream(n);
 * vector<string> param_1 = obj->insert(idKey,value);
 */