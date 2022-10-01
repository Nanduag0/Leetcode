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

//Greedy Approach --> for finding the max uncovered rectangle we have to find max diff between unintersected x and y coordinates of tower


int main()
{
	fast;
	int t;cin>>t;
	while(t--)
	{
		ll xx,yy,n;cin>>xx>>yy>>n;
		
		if(n==0)
		{
		cout<<xx*yy<<endl;
		}
		else{
		vector <ll> x,y;
		
		x.push_back(0);
		y.push_back(yy+1);
		x.push_back(xx+1);
		y.push_back(0);
		
		for(ll i=0;i<n;i++)
		{
			ll x1,y1;cin>>x1>>y1;
			x.push_back(x1);
			y.push_back(y1);
		}
		
		sort(x.begin(),x.end());
		sort(y.begin(),y.end());
		
		ll xmax=INT_MIN,ymax=INT_MIN;
		for(int i=1;i<x.size();i++)
		{
			xmax=max(xmax,(x[i]-x[i-1]));
			ymax=max(ymax,(y[i]-y[i-1]));
		}
	//	cout<<xmax-1<<" "<<ymax-1<<endl;
		cout<<(xmax-1)*(ymax-1)<<endl;
	}
	}
}
