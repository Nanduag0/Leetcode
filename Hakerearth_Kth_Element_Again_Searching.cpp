#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define mod 1000000007
#define MAX 105
#define ll long long int
#define pq priority_queue <ll,vector<ll>,greater<ll>>
#define pqpii priority_queue <pair<ll,ll >,vector<pair<ll,ll > >,greater<pair<ll,ll > > >

int main()
 {
	fast;
	ll t;cin>>t;
	while(t--)
	{
		ll n,q;
		cin>>n>>q;
		vector<pair<ll,ll > > v;
		for(int i=0;i<n;i++)
		{
			ll a,b;cin>>a>>b;
			v.push_back(make_pair(a,b));
		}
		
		sort(v.begin(),v.end());
		
		vector <pair<ll,ll > > mrg;
		mrg.push_back(v[0]);
		
		for(int i=1;i<v.size();i++)
		{
			if(mrg[mrg.size()-1].second >= v[i].first)
			{
				mrg[mrg.size()-1].second = v[i].second; 	
			}
			else 
				mrg.push_back(v[i]);
		}
		
		while(q--)
		{
			ll k;cin>>k;
			ll ans=-1;
			for(int i=0;i<mrg.size() && k>0;i++)
			{
				ll diff = mrg[i].second - mrg[i].first + 1;
				if(diff >= k)
				{
					ans=mrg[i].first + (k-1);
					break;
				}
				else
				{
					k-=diff;
				}
			}
			
			cout<<ans<<endl;
		}
	}
 }
