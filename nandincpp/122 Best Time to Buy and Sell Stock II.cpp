

//All prices are distinct

//METHOD-1
//----xxxx----

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
    int profit = 0;

    for(int i=1;i<n;i++)
    if(price[i] > price[i-1])
    profit += (price[i]-price[i-1]);

    cout<<profit<<endl;

    return 0;
}

//METHOD-2
//-----xxxx-----

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

    int price[] = {1,2,3,4,5};
    int n = sizeof(price)/sizeof(price[0]);

    int valley = price[0],peak,total = 0;
    bool peak_mila = false;

    for(int i=1;i<n;i++)
    {
        if(price[i] < valley)
        valley = price[i];

        else if(price[i] > valley)
        {
            peak_mila = true;
            peak = price[i];
        }

        if(peak_mila)
        {
            total += (peak - valley);
            valley = peak;
            peak_mila = false;
        }
    }
    cout<<total<<endl;

    return 0 ;
}