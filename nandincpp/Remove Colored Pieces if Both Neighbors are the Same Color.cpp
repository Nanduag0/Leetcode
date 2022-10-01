class Solution {
public:
    bool winnerOfGame(string colors) 
    {
        if(colors.size() < 3)
            return 0;
        
        vector<int> v(2, 0);
        for(int i=1;i<colors.size()-1;i++)
        {
            if(colors[i]==colors[i-1] && colors[i]==colors[i+1])
                v[colors[i]-'A']++;
        }
        
        return v[0]>v[1];
    }
};