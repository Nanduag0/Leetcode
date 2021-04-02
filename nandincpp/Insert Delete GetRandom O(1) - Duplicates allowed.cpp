class RandomizedCollection {
private:
    unordered_multiset<int> collection;
public:
    /** Initialize your data structure here. */
    RandomizedCollection() {
        
    }
    
    /** Inserts a value to the collection. Returns true if the collection did not already contain the specified element. */
    bool insert(int val)
    {
        bool notExists = (collection.find(val) == collection.end()) ? true : false;

        collection.insert(val);
        return notExists;
    }
    
    /** Removes a value from the collection. Returns true if the collection contained the specified element. */
    bool remove(int val) 
    {
        auto it = collection.find(val);
        
        if(it == collection.end()){
            return false;
        }
        
        collection.erase(it);
        return true;
    }
    
    /** Get a random element from the collection. */
    int getRandom()
    {
        int rr = rand() % collection.size();
      
        unordered_multiset<int>::iterator it = collection.begin();
        
        int k = 0;
        while(k < rr)
        {
            it++;
            k++;
        }
        return *it;
        
    }
};

/**
 * Your RandomizedCollection object will be instantiated and called as such:
 * RandomizedCollection* obj = new RandomizedCollection();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */