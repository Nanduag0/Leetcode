class MyCalendar {
public:
   set<pair<int,int>> st;
    MyCalendar() {
    }
    
    bool book(int start, int end) {
        if(st.find({start,end})!=st.end())
            return false;
        st.insert({start,end});
        int prev=0;
        for(auto it:st)
        {
            if(it.first<prev)
            {
                st.erase({start,end});
                return false;
            }
            prev=it.second;
        }
        return true;
    }
};

/**
 * Your MyCalendar object will be instantiated and called as such:
 * MyCalendar* obj = new MyCalendar();
 * bool param_1 = obj->book(start,end);
 */