#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define mod 1000000007;
#define ll long long int
#define pq priority_queue <ll,vector<ll>,greater<ll>>
#define pqpii priority_queue <pair<ll,ll>,vector<pair<ll,ll>>,greater<pair<ll,ll>>>

void firstOccurence(int ar[],int n,int x,int &res,int low, int high)
{
    int fO = low + (high - low)/2 ;
    if(low <= high)
    {
        if(ar[fO]==x)
        {
            res = fO;
            firstOccurence(ar,n,x,res,low,fO-1);
        }
        else if(ar[fO] > x)
        {
             firstOccurence(ar,n,x,res,low,fO-1);
        }
        else firstOccurence(ar,n,x,res,fO+1,high);
    }
    return ;
}


void lastOccurence(int ar[],int n,int x,int &res,int low, int high)
{
    int lO = low + (high - low)/2 ;
    if(low <= high)
    {
        if(ar[lO]==x)
        {
            res = lO;
            lastOccurence(ar,n,x,res,lO+1,high);
        }
        else if(ar[lO] > x)
        {
             lastOccurence(ar,n,x,res,low,lO-1);
        }
        else lastOccurence(ar,n,x,res,lO+1,high);
    }
    return ;
}


int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n;cin>>n;
        int ar[n];
        for(int i=0;i<n;i++)cin>>ar[i];
        int x,first=-1,last=-1;cin>>x;
        firstOccurence(ar,n,x,first,0,n-1);
        lastOccurence(ar,n,x,last,0,n-1);
        if(first==-1 && last==-1)
        cout<<-1<<endl;
        else cout<<last-first+1<<endl;
    }
}

