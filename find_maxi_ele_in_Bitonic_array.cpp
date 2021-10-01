#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define mod 1000000007;
#define ll long long int
#define pq priority_queue <ll,vector<ll>,greater<ll>>
#define pqpii priority_queue <pair<ll,ll>,vector<pair<ll,ll>>,greater<pair<ll,ll>>>

/*
Same solution for both peak element problem
 and finding maxi element in Bitonic Array
*/
int solve(int ar[],int n)
{
   if(n==1)
    return 0;
   ll l=0,r=n-1;
   while(l<=r)
   {
        ll mid = l+(r-l)/2;
        if(mid==0 || mid==n-1)
        {
            if(mid==0)
            {
                if(ar[mid]<ar[mid+1])
                    return mid+1;
                return mid;
            }
            else
            {
                if(ar[mid]<ar[mid-1])
                    return mid-1;
                return mid;
            }
        }
        else if(mid>0 && mid<n-1)
        {
            if(ar[mid-1]<ar[mid] && ar[mid+1]<ar[mid])
                return mid;
            else if(ar[mid-1]>ar[mid])
                r=mid-1;
            else if(ar[mid+1]>ar[mid])
                l=mid+1;
        }
   }
   return -1;
}

int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n;cin>>n;
        int ar[n];
        for(int i=0;i<n;i++)cin>>ar[i];
        cout<<solve(ar,n)<<endl;
    }
}
