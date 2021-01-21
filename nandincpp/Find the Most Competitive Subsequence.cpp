class Solution {
public:
    vector<int> mostCompetitive(vector<int>& a, int k)
    {
        stack<int> st;
        int n = a.size();
        
        for(int i=0;i<n;i++)
        {         
            while(st.size()>0 && a[i]<a[st.top()] && st.size()+n-i>k)
            {
                st.pop();
            }
            
            if(st.size() < k)
                st.push(i);
        }
        
        vector<int> asn;
        while(st.size() > 0)
        {
            asn.push_back(a[st.top()]);
            st.pop();
        }
        
        reverse(asn.begin(), asn.end());
        return asn;
    }
};