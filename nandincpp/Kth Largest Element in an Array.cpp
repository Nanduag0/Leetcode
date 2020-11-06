class Solution {
public:
    int findKthLargest(vector<int>& a, int k)
    {
        // min heap of size = k;
        priority_queue <int, vector<int>, greater<int>> heap;
        int cnt = 0;
        
        for(int i=0;i<a.size();i++)
        {
            if(cnt < k)
            {
                cnt++;
                heap.push(a[i]);
            }
            
            else
            {
                if(a[i] > heap.top())
                {
                    heap.pop();
                    heap.push(a[i]);
                }
            }
        }
        
        return heap.top();        
    }
};