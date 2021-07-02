class TweetCounts {
    map<string, vector<int>> m;
    map<string, int> f = {{"minute", 60}, {"hour", 3600}, {"day", 86400}};
public:
    TweetCounts()
    {
        
    }
    
    void recordTweet(string tweetName, int time) 
    {
        m[tweetName].push_back(time);
    }
    
    vector<int> getTweetCountsPerFrequency(string freq, string tweetName, int start, int end)
    {
        vector<int> ans;
        
        for(int i=0;i<=(end-start)/f[freq];i++)
        {
            ans.push_back(0);
        }
        
        for(auto i : m[tweetName])
        {
            if(i>=start && i<=end)
            {
                int idx = (i-start)/f[freq];
                ans[idx]++;
            }
        }
        
        return ans;
    }
};

/**
 * Your TweetCounts object will be instantiated and called as such:
 * TweetCounts* obj = new TweetCounts();
 * obj->recordTweet(tweetName,time);
 * vector<int> param_2 = obj->getTweetCountsPerFrequency(freq,tweetName,startTime,endTime);
 */