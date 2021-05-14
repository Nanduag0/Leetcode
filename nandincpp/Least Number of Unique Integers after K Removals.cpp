class Solution {
public:
    int findLeastNumOfUniqueInts(vector<int>& a, int k) 
    {
        map<int, int> m;
        for(int i=0;i<a.size();i++)
            m[a[i]] ++;
        
        priority_queue<int, vector<int>, greater<int> > pq;
        for(auto i : m){
			pq.push(i.second);
		}
		while(k > 0){
			k -= pq.top();
			if(k >= 0){
				pq.pop();
			}
		}
		return pq.size();
    }
};