class Solution {
public:
    
    map<string, string> shortening_api;
    string alphabets = "abcdefghijklmnopqrstuvwxyzQWERTYUIOPLKJHGFDSAZXCVBNM1234567890";
    
    // Encodes a URL to a shortened URL.
    string encode(string longUrl)
    {
        random_shuffle(alphabets.begin(), alphabets.end());
        string xx = alphabets.substr(0, 5);
        
        string shortUrl = "bitly.com/" + xx;
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
