#include<bits/stdc++.h>
typedef  long long int ll;
using namespace std ;

int primeSum(int n){
    int res=0;
    for(ll i=2;i*i<=n;i++){
        if(n%i==0){
            while(n%i==0){
                res++;
                n/=i;
            }
        }
    }
    return res + (n>1);
}

int main(){
    ll t;
    cin>>t;
    while(t){
        ll x,k;
        cin>>x>>k;
        if(primeSum(x)>=k){
            cout<<1<<endl;
        }
        else
            cout<<0<<endl;
        --t;
    }
}
