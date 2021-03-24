class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k)
    {
        int sum = 0;
        int maxPoints = 0;
        
        for (int i=0; i<cardPoints.size() && i<k; i++)
        {
            sum += cardPoints[i];
        }
        
        if (k == cardPoints.size()) 
        {
            return sum;
        }
        maxPoints = sum;
        
        int i=k-1, j=cardPoints.size()-1;
        while(j >= cardPoints.size()-k) 
        {
            sum -= cardPoints[i];
            sum += cardPoints[j];
            i--;
            j--;
            maxPoints = max(maxPoints, sum);
        }
        
        return maxPoints;
    }
};