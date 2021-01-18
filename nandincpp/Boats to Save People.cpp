class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) 
    {
        sort(people.begin(), people.end());
        
        int n = people.size(),i = 0, cnt = 0;
        int j = n-1;
        
        while(i <= j)
        {
            
            if(people[i]+people[j] <= limit)
            {
                
                i++, j--;
            }
            
            else
                j--;
            
            cnt++;
        }
        
        return cnt;
    }
};