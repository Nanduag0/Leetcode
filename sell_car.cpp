#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;
ll mod = 1000000007;
int main(){
    ll t;
    cin>>t;
    while(t){
       ll n;
       cin>>n;
       ll ar[n];
       stack <ll> cost;
       for(ll i=0;i<n;i++)
        cin>>ar[i];
       sort(ar,ar+n);
       for(ll i=0;i<n;i++){
        cost.push(ar[i]);
       }
       ll temp,sum=0,i=0;
       while(!cost.empty()){
        temp=cost.top()-i;
        cost.pop();
        if(temp>0)
            sum=(sum+temp)%mod;
        i++;
       }

      cout<<sum%mod<<endl;
     --t;

    }
}
