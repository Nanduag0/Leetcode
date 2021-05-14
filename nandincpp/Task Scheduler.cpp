class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        unordered_map<char,int>count;
        
        for(char t:tasks)
            count[t]++;//count the frequency
        priority_queue<int>pq;//insert in priority queue to get the max first
        for(auto c:count)
            pq.push(c.second);
        int result=0;
        while(!pq.empty()){
            int time=0;
            vector<int>temp;
            for(int i=0;i<n+1;++i){
                if(!pq.empty()){
                temp.push_back(pq.top()-1);//insert the value in temp list
                pq.pop();
                time++;
            }
            }
            for(auto t:temp)
                if(t) pq.push(t);//if any element is left
                result += pq.empty() ? time : n+1;
            
        }
        return result;

    }
};