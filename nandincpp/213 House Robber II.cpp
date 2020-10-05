//https://leetcode.com/problems/house-robber-ii/


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

    int n;
    cin>>n;
    vector<int> val(n+1);
    int dp[n+1];

    for(int i=0;i<n;i++)
    cin>>val[i];

    //Base case
    dp[0] = val[0];
    dp[1] = max( val[0], val[1]);

    for(int i=2;i<n-1;i++)
    dp[i] = max( dp[i-1], dp[i-2]+val[i]);

    int value1 = dp[n-2];

    dp[0] = 0;
    dp[1] = val[1];

    for(int i=2;i<n;i++)
    dp[i] = max( dp[i-1], dp[i-2]+val[i]);

    int value2 = dp[n-1];

    cout<<max( value1, value2)<<endl;

    return 0;
}
