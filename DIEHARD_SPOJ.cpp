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
 
 int dp[1005][1005][2][2][2] ;
 
int solve(int h,int a,int air ,int water ,int fire)
{
	if(h<=0 || a<=0) return 0;
	
	
	if(dp[h][a][air][water][fire]!=-1) return dp[h][a][air][water][fire];
	
	if(air==0 && water==0 && fire==0)
	{
		return dp[h][a][air][water][fire] = max(solve(h+3,a+2,1,0,0),
		max(solve(h-5,a-10,0,1,0),solve(h-20,a+5,0,0,1)));
	}
	
	if(air)
	{
		return dp[h][a][air][water][fire] =	max(solve(h-5,a-10,0,1,0),solve(h-20,a+5,0,0,1))+1;
	}
	
	if(water)
	{
		return dp[h][a][air][water][fire] = max(solve(h+3,a+2,1,0,0),solve(h-20,a+5,0,0,1))+1;
	}
	
	if(fire)
	{
		return dp[h][a][air][water][fire] = max(solve(h-5,a-10,0,1,0),solve(h+3,a+2,1,0,0))+1;
	}
}
 


int main()
{
	fast;
	int t;cin>>t;
	while(t--)
	{
		int h,a;cin>>h>>a;
		
		//----------------Dp Solution--------------------------//
		
		memset(dp,-1,sizeof(dp));
		cout<<solve(h,a,0,0,0)<<endl;
		
		
		
		
		//-------------Greedy Solution-----------------------//
		
	/*	Approach - As we see that if we are in air out armour and health both increase so we tend to move into this as much as possible so 
		
		For the time we will survive we will move like --> air , (water/fire) , air , (water/fire) , air .......
		
		Noted : Water and Fire moves have to be done if we satify the minimum criteria         */
		
		ll time=0;
		
		while(1)
		{
			if(time%2==0)
			{
				h+=3;
				a+=2;
			}
			else
			{
				if((a>10 && h>5))
				{
					a-=10;
					h-=5;
				}
				else if(h>20)
				{
					a+=5;
					h-=20;
				}
				else break;
			}
			
			if(h<=0 || a<=0) break;
			
			time++;
		}
		
		cout<<time<<endl;
	}
}

