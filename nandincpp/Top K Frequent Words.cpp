class Solution {
public:
  //  vector<string> topKFrequent(vector<string>& words, int k) 
    
        struct compare{
      bool operator()(const pair<string,int>& x, const pair<string,int>& y ){
         // if(x.second!=y.second) return x.second>y.second;
          //else
          //{
              return y.second>x.second || (x.second==y.second && x.first>y.first);
          //}
      }  
    };
    vector<string> topKFrequent(vector<string>& words, int k) {
        unordered_map<string,int>m;
        vector<string> ret;
        priority_queue<pair<string,int>,vector<pair<string,int>>,compare> q;
        for(int i = 0;i<words.size();i++)
        {
            m[words[i]]++;
        }
        for(auto elem:m)
        {
            q.push({elem.first,elem.second});
        }
        while(k!=0)
        {
            ret.push_back(q.top().first);
            q.pop();
            k--;
        }
        return ret;
    }    
    
};