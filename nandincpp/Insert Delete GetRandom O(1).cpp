class RandomizedSet {
    set<int> s;
public:
    /** Initialize your data structure here. */
    RandomizedSet() {
        
    }
    
    /** Inserts a value to the set. Returns true if the set did not already contain the specified element. */
    bool insert(int val) 
    {
        if (s.find(val)==s.end())
        {
            s.insert(val);
            return 1;
        }
        return 0;
    }
    
    /** Removes a value from the set. Returns true if the set contained the specified element. */
    bool remove(int val)
    {
        set<int> :: iterator i;
        i = s.find(val);
        
        if(i == s.end())
            return 0;
        
        s.erase(i);
        return 1;
    }
    
    /** Get a random element from the set. */
    int getRandom()
    {
        int n = s.size();
        int rr = rand() %  n;
        
        int k = 0;
        set<int> :: iterator i = s.begin();
        
        while(k < rr)
        {
           i++;
            k++;
        }
        
        return *i;
    }
};

/**
 * Your RandomizedSet object will be instantiated and called as such:
 * RandomizedSet* obj = new RandomizedSet();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */