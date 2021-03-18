class Solution {
public:
    bool threeConsecutiveOdds(vector<int>& a)
    {
        int n=a.size();
        
        int count=0;
        
        for(int i=0;i<n;i++)
        {
            if(a[i]%2==1)
			   count++;
            
            else 
			  count=0;
            
            if(count==3)
			  return true;
        }
        
        return false;
    }
};