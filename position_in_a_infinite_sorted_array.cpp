#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define mod 1000000007;
#define ll long long int
#define pq priority_queue <ll,vector<ll>,greater<ll>>
#define pqpii priority_queue <pair<ll,ll>,vector<pair<ll,ll>>,greater<pair<ll,ll>>>

int solve(int ar[],int x)
{
    /*
    as it is a infinite array so we don't know the size of the array
    so considering the end pointer as 1st index and start as 0th index
    we start finding the range in which our value can be found , we increase
    the end by 2x and change the start into the previous end we do that until we
    get our range in which X can be found
    */
    int l=0,r=1;
    while(!(ar[l]<=x && ar[r]>=x))
    {
        l=r;
        r*=2;
    }
    /*After we find the range simply use Binary Search to find X*/
    while(l<=r)
    {
        int mid = l + (r-l)/2;
        if(ar[mid]==x)
            return mid;
        else if(ar[mid]>x)
            r=mid-1;
        else if(ar[mid]<x)
            l=mid+1;
    }
    return -1;}

int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n;cin>>n;
        int ar[n];
        for(int i=0;i<n;i++)cin>>ar[i];
        int x;cin>>x;
        cout<<solve(ar,x)<<endl;
    }
}

