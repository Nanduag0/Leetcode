class Solution {
public:
vector<string> buildArray(vector<int>& target, int n)
{
 vector<string>str;
 int ind=0;
 for(int i=1;i<=n&&ind<target.size();i++)
 {
     if(target[ind]==i)
     {
         str.push_back("Push");
         ind++;
     }
     else
     {
         str.push_back("Push");
         str.push_back("Pop");
     }
     
 }
    return str;
}
 };