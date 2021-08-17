class NumArray {
    vector<int> pref;
public:
    NumArray(vector<int>& a) 
    {
        //this->a = a;
        int n = a.size();
        pref.resize(n);
        
        pref[0] = a[0];
        for(int i=1;i<a.size();i++)
            pref[i] = pref[i-1] + a[i];
    }
    
    int sumRange(int left, int right) 
    {
        if(left == 0)
            return pref[right];
        else
            return pref[right]-pref[left-1];
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(left,right);
 */