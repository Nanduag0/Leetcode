class Solution {
public:
    int bagOfTokensScore(vector<int>& token, int P) 
    {
        int score = 0,left = 0,right = token.size()-1;
        sort(token.begin(), token.end());
        
        while(left <= right)
        {
            if(P >= token[left])
            {
                score++;
                P -= token[left];
                left++;
            }
            
            else
            {
                if(P+token[right]>=token[left] && score!=0 && left!=right)
                {
                    score--;
                    P += token[right];
                    right--;
                }
                
                else
                    break;
            }
        }
        return score;        
    }
};