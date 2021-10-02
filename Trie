class Trie {
public:
    /** Initialize your data structure here. */
 
    class node{
     public:   bool end;
       unordered_map<char, node*> mp;
    };
    
    node* trie;
    Trie(){
        trie = new node();
    }
    
    /** Inserts a word into the trie. */
    void insert(string word) {
        
        int i=0;
        node* it = trie;
        
        while(i<word.size()){
            if(it->mp[word[i]-'a']==NULL){
                it->mp[word[i]-'a'] = new node();
            }
            it = it->mp[word[i]-'a'];
            i++;
        }
        it->end = true;
    }
    
    /** Returns if the word is in the trie. */
    bool search(string word) {
         
        node*it = trie;
        for(auto x: word){
            if(it->mp[x-'a']==NULL) return false;
            it=it->mp[x-'a'];
        }
        return it->end;
         
    }
    
    /** Returns if there is any word in the trie that starts with the given prefix. */
      
    bool startsWith(string prefix) {
      
        node* it=trie;
        for(char c:prefix){
            c-='a';
            if(it->mp[c]==NULL) return false;
            it=it->mp[c];
        }
        return true;
    }
};

/**
 * Your Trie object will be instantiated and called as such:
 * Trie* obj = new Trie();
 * obj->insert(word);
 * bool param_2 = obj->search(word);
 * bool param_3 = obj->startsWith(prefix);
 */
