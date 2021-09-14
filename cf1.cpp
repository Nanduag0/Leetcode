#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	string s;
	cin>>s;
	int l=s.length();
	int j=0;
	map<char,int> mp;
	map<char,int> :: iterator it;
	int count=0;
	while(j<l)
	{
	 mp[s[j]]++;
	 j++;
	}
	for(it=mp.begin();it!=mp.end();it++)
	{
		if(it->second>1)
		count+=it->second;
	}
  cout<<count;
  return 0;
  
  
}

