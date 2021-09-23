#include<bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  int count;
  int n;
  while(t--)
  {
  	cin>>n;
  	count=0;
  	if(n==0)
  	cout<<0;
  	n=abs(n);
  	while(n)
  	{
  	 if(n&1)
	   count++;	
  	 n>>=1;	
	}
	if(count==1)
	cout<<1;
	else
	cout<<2;
  }
  return 0;
}
