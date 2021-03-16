class Solution {
public:
    
    map<string, string> shortening_api;
    
    // Encodes a URL to a shortened URL.
    string encode(string longUrl)
    {
        string shortUrl = "bitly.com/" + shortening_api.size();
        shortening_api.insert({shortUrl, longUrl});
        
        return shortUrl;
    }

    // Decodes a shortened URL to its original URL.
    string decode(string shortUrl)
    {
        return shortening_api[shortUrl];
    }
};

// Your Solution object will be instantiated and called as such:
// Solution solution;
// solution.decode(solution.encode(url));