#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define mod 1000000007
#define MAX 105
#define ll long long int
#define pq priority_queue <ll,vector<ll>,greater<ll>>
#define pqpii priority_queue <pair<ll,ll >,vector<pair<ll,ll > >,greater<pair<ll,ll > > >


int noc(ll ar[],ll n,ll mind)
{
	int cows=1,left=0;
	
	for(int i=1;i<n;i++)
	{
		if(ar[i]-ar[left] >= mind)
		{
			left=i;
			cows++;
		}
	}
	
	return cows;
}

int main()
{
	ll t;cin>>t;
	while(t--)
	{
		ll n,c,maxi=INT_MIN;cin>>n>>c;
		ll points[n];
		
		for(int i=0;i<n;i++)
		{
			cin>>points[i];
			maxi=max(maxi,points[i]);
		}
		
		sort(points,points+n);
		
		ll l=1,r=maxi,ans=-1;
		while(l<=r)
		{
			ll mid = l + (r-l)/2;
			
			if(noc(points,n,mid) >= c)
			{
				ans=mid;
				l=mid+1;
			}
			else r=mid-1;
		}
		
		cout<<ans<<endl;
	}
}
