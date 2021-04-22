class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& w1, vector<string>& w2) 
    {
        string ss1 = "";
        for(int i=0;i<w1.size();i++)
        {
            ss1 += w1[i];
        }
        
        string ss2 = "";
        for(int i=0;i<w2.size();i++)
        {
            ss2 += w2[i];
        }
        
        return (ss1==ss2);
    }
};