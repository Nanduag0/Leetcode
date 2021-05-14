class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        vector<int> res;
        for(int i = 0; i < prices.size()-1;i++){
            int foundMin = 0;
            for(int j = i+1; j < prices.size();j++){
                if(prices[j] <= prices[i]){
                    foundMin = 1;
                    res.push_back(prices[i] - prices[j]);
                    break;
                }            
            }
            if(foundMin == 0)
                res.push_back(prices[i]);
        }
        res.push_back(prices[prices.size()-1]);
        return res;
    }
};