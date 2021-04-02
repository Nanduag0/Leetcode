class MyHashSet {
    vector<bool> v;
public:
    /** Initialize your data structure here. */
    MyHashSet() 
    {
        v.resize(1000006, 0);
    }
    
    void add(int key) 
    {
        v[key] = 1;
    }
    
    void remove(int key)
    {
        v[key] = 0;
    }
    
    /** Returns true if this set contains the specified element */
    bool contains(int key) 
    {
        if(v[key] == 1)
            return 1;
        return 0;
    }
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */