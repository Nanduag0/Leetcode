class Solution {
public:
    int openLock(vector<string>& deadends, string target) {
        
        //we push all the deadends into the hashset so it would be easy to find
        unordered_set<string> deadEnds(deadends.begin(),deadends.end());
        
        
        //we check if the "0000" itself is a dead end
        if(deadEnds.count("0000"))
            return -1;
        
        //visited stores the patteres which have already tried
        unordered_set<string> visited; 
        visited.insert("0000");
        
        //we use queue to implement BFS 
        queue<string> q;
        q.push("0000");
        int level=0;
        while(!q.empty())
        {
            int size=q.size();
            while(size)
            {
                //get the next pattern and previous pattern for every character in the front of the string
                
                //example 1000 - {1100,0000} for 1st wheel
                string front=q.front();
                q.pop();
                if(front==target)
                    return level;
                for(int i=0;i<4;i++)
                {
                    string s1=front;
                    s1[i]=(s1[i]-'0'==9) ? '0' : s1[i]-'0'+1+'0'; //increment value in that wheel
                    //decrement the value in string
                    string s2=front;
                    s2[i]=(s2[i]-'0'==0) ? '9' : s2[i]-'0'-1+'0';
                    
                    if(!visited.count(s1) && !deadEnds.count(s1))
                    {
                        q.push(s1);
                        visited.insert(s1);
                    }
                    if(!visited.count(s2) && !deadEnds.count(s2))
                    {
                        q.push(s2);
                        visited.insert(s2); //since we have visited
                    }
                }
                size--;
                
            }
            level++;
        }
        return -1;
        
    }
};