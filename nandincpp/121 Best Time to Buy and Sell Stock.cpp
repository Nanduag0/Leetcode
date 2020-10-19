//https://leetcode.com/problems/best-time-to-buy-and-sell-stock/


#include <bits/stdc++.h> 
#define ll long long
#define ull unsigned long long
#define endl '\n'
#define pb push_back
#define mp make_pair
#define sp(x) fixed<<setprecision(x)
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;

int main()
{
    fast_io;

    int price[] = {100, 180, 260, 310, 40, 535, 695};
    int n = sizeof(price)/sizeof(price[0]);
    int ans = 0;

    int min = price[0];
    for(int i=1;i<n;i++)
    {
        if(price[i] < min)
        min = price[i];
        
        else
        ans = max(ans, price[i]-min);
    }
    cout<<ans<<endl;

    return 0;
}
