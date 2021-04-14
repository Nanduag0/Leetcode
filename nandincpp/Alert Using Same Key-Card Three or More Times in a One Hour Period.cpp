class Solution {
public:
int removeColon(string s) 
{ 
if (s.size() == 4)  
    s.replace(1, 1, ""); 
  
if (s.size() == 5)  
    s.replace(2, 1, ""); 
   
return stoi(s); 
}

bool islessthan1hour(string keytime1 ,string keytime3)
{    

   int x=  removeColon(keytime1);
   int z=  removeColon(keytime3);
    
   int time1= (x/100)*60 +x%100;
   int time3= (z/100)*60 +z%100;
    
    if(abs(time3-time1)<=60)
    return true;
    else
        return false;
    
    
}
bool findans(vector<string> &v)
{
    int n=v.size();
    for(int i=0;i<n;i++)
    {
        if(i+2<n && islessthan1hour(v[i],v[i+2]))
                return true;
    }
    
    return false;
}
vector<string> alertNames(vector<string>& keyName, vector<string>& keyTime) {
    vector<string> vt;
    map<string,set<string>>mp;
    int n=keyName.size();
    for(int i=0;i<n;i++)
        mp[keyName[i]].insert(keyTime[i]);
    
        
for(auto it2=mp.begin();it2!=mp.end();it2++)
    {
         vector<string> temp;
        for(auto it:it2->second)
        {temp.push_back(it);}
    
    if(findans(temp)) 
    {vt.push_back(it2->first);}
        
    }
    
return vt;
}
};

