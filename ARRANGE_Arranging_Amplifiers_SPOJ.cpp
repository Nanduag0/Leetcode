#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define mod 1000000007
#define MAX 108
#define ll long long int
#define ull unsigned long long int
#define pqp priority_queue < ll , vector<ll> , greater<ll> >
#define pqpii priority_queue <pair<ll,ll>,vector<pair<ll,ll>>,greater<pair<ll,ll>>>
#define pie 3.1415926536
#define pb push_back
#define M 998244353
#define ff first
#define ss second
#define pi pair<int,int>
#define pii pair< int, pair<int,int> >
#define all(v) (v).begin(),(v).end()
#define mem(a,b) memset(a,b,sizeof(a))

//Greedy Approach ->

/*
1.sort in reverse to get answer 

Edge cases ->
1.If array consist of 2 element and they are 2 and 3 then in sorted increasing order will be answer
2.if array consist of 1s then move them in front and the remaining array as reverse 
  A)but if remaining are 2 elements as 2,3 then in increasing order
*/

int main()
{
	fast;
	int t;cin>>t;
	while(t--)
	{
		ll n;cin>>n;
		ll ar[n];
		map <int,int > mp;
		for(ll i=0;i<n;i++)
		{
			cin>>ar[i];
			mp[ar[i]]++;	
		}
		
		sort(ar,ar+n);
		
		if(mp.size()==2 && mp[2]==1 && mp[3]==1)
		{
			for(int i=0;i<n;i++)
			cout<<ar[i]<<" ";
			cout<<endl;
		}
		else if(mp[1]!=0)
		{
				vector <int> v;
				for(int i=0;i<n;i++)
				{
					if(ar[i]==1)continue;
					else v.push_back(ar[i]);
				}
			
			for(int i=0;i<n && ar[i]==1;i++)
				cout<<ar[i]<<" ";
			
			if(n == mp[1]+2 && mp[2]==1 && mp[3]==1)
			{	
				sort(v.begin(),v.end());
				for(int i=0;i<v.size();i++)
				cout<<v[i]<<" ";
				cout<<endl;
			}
			else
			{
				sort(v.begin(),v.end(),greater<ll>());
				for(int i=0;i<v.size();i++)
				cout<<v[i]<<" ";
				cout<<endl;
			}
		}
		else
		{
			sort(ar,ar+n,greater<ll>());
			for(int i=0;i<n;i++)
			cout<<ar[i]<<" ";
			cout<<endl;
		}
		
		mp.clear();
	}
}

