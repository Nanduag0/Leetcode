#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;
int main(){
   ll t;
   cin>>t;
   while(t){
      ll n,s,v,p,customers;
      cin>>n;
      vector <ll> profit;
      for(int i=1;i<=n;i++){
        cin>>s>>p>>v;
        if(p%(s+1)==0)
            customers=p/(s+1);
        else
            customers=floor(p/(s+1));
        profit.push_back(customers*v);
      }
      sort(profit.begin(),profit.end(),greater<ll>());
      cout<<profit[0]<<endl;
    --t;
   }
}



