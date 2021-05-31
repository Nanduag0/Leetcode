class Solution {
public:
    string entityParser(string text)
    {
            unordered_map<string, string> mp = { {"&quot;", "\""}, {"&apos;", "\'"}, {"&amp;", "&"}, {"&gt;", ">"}, {"&lt;", "<"}, {"&frasl;", "/"}};
            for(auto& [key,value]:mp)
            {
                regex xx(key);
                text=regex_replace(text,xx,value);
            }
            return text;
    }
};