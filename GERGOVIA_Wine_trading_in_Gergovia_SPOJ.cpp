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


int main()
{
//	int t;cin>>t;
	
	//--------------- Greedy 2 Pointer Approach --------------------//
	
	/*
		Here we have to find the minimum work performed when a bottle(s) of wine is transported from house x to y , 
		the basic idea is to provide transportation between the closest buyer and seller at each time
	*/
	
	while(1)
	{
		ll n;cin>>n;
		
		if(n==0)return 0;
		
		ll house[n];
		
		for(ll i=0;i<n;i++)cin>>house[i];
		
		ll i=0,j=0;
		
		ll totwork=0; 
		
		while(i<n && j<n)
		{		
			while(house[j] >= 0 && j<n) j++;
			while(house[i] <= 0 && i<n) i++;
			
			//cout<<house[i]<<" "<<house[j]<<endl;
			
			if(house[i] >= abs(house[j])) 
			{
				totwork += abs(i-j)*abs(house[j]);
				house[i] += house[j];
				house[j] = 0;
			}
			else
			{
				totwork += abs(i-j)*house[i];
				house[j]+=house[i];
					house[i]=0;
			}
		//	cout<<house[i]<<" "<<house[j]<<endl;
			//cout<<i<<" "<<j<<endl;
		//	cout<<totwork<<endl;
		}
		
		cout<<totwork<<endl;	
	}	
	
	return 0;
} 
