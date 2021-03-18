class Solution {
public:
    int minimumSize(vector<int>& a, int maxOperations)
    {
        int l = 1, h = *max_element(a.begin(), a.end());
        
        while(l < h)
        {
            int mid = l + (h-l)/2;
            int cnt = 0;
            
            for(auto i : a)
            {
                cnt += (i/mid);
                
                if(i%mid != 0)
                    cnt++;
                
            }
            
            if(a.size()+maxOperations < cnt)
                l = mid+1;
            else
                h = mid;
        }
        
        return l;
    }
};