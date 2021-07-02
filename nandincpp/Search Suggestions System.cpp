class Solution {
public:
    vector<vector<string>> suggestedProducts(vector<string>& products, string searchWord)
    {
        string temp = "";
        int n = products.size();
        vector<vector<string>> ans(searchWord.size());
        
        sort(products.begin(), products.end());
        
        for(int i=0;i<searchWord.size();i++)
        {
            temp += searchWord[i];
            int x = lower_bound(products.begin(), products.end(), temp) - products.begin();
            
            for(int j=x;j<min(x+3, n);j++)
            {
                if(products[j].substr(0, i+1) == temp)
                    ans[i].push_back(products[j]);
                else
                    break;
            }
        }
        
        return ans;
    }
};