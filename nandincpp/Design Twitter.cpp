class Twitter {
    map<int, vector<pair<int, int>> > tweets;
    map<int, set<int>> follows;
    int time = 0;
public:
    /** Initialize your data structure here. */
    Twitter()
    {
        time = 0;
    }
    
    /** Compose a new tweet. */
    void postTweet(int userId, int tweetId) 
    {
        tweets[userId].push_back({time, tweetId});
        time++;
    }
    
    /** Retrieve the 10 most recent tweet ids in the user's news feed. Each item in the news feed must be posted by users who the user followed or by the user herself. Tweets must be ordered from most recent to least recent. */
    vector<int> getNewsFeed(int userId) 
    {
        vector<int> ans;
        priority_queue<pair<int, int>> pq;
        
        follows[userId].insert(userId);
        
        for(auto x : follows[userId])
        {
            for(auto y : tweets[x])
                pq.push(y);
        }
        
        int k = 10;
        while(!pq.empty() && k)
        {
            ans.push_back(pq.top().second);
            pq.pop();
            k--;
        }
        
        return ans;
    }
    
    /** Follower follows a followee. If the operation is invalid, it should be a no-op. */
    void follow(int followerId, int followeeId) 
    {
        follows[followerId].insert(followeeId);
    }
    
    /** Follower unfollows a followee. If the operation is invalid, it should be a no-op. */
    void unfollow(int followerId, int followeeId)
    {
        follows[followerId].erase(followeeId);
    }
};

/**
 * Your Twitter object will be instantiated and called as such:
 * Twitter* obj = new Twitter();
 * obj->postTweet(userId,tweetId);
 * vector<int> param_2 = obj->getNewsFeed(userId);
 * obj->follow(followerId,followeeId);
 * obj->unfollow(followerId,followeeId);
 */