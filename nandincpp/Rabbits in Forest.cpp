class Solution {
public:
    int numRabbits(vector<int>& answers) 
    {
        if (answers.size() == 0) 
            return 0;
        
        map<int, int> colors;
        
        for (int i : answers) 
        {
            if (!colors.count(i))
            {
                colors[i] = i;
            }
            else 
            {
                colors[i] -= 1;
                if (colors[i] < 0) 
                {
                    colors[i] = i;
                } 
            }
        }
        
        int total = answers.size();
        
        for (auto it = colors.begin(); it != colors.end(); it++)
        {
            total += it->second;
        }
        
        return total;
    }
};