#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;
int main(){
    ll t;
    cin>>t;
    while(t){
        ll n;
        cin>>n;
        ll ar[n];
        for(int i=1;i<=n;i++)
        cin>>ar[i];
        ll tokens[100000]={0},l=n,sum=0;
        while(l>=1){
                 sum+=l;
            for(int i=1;i<=l;i++){
                tokens[i]+=1;
            }
            for(int i=1;i<=l;i++){
                if(ar[i]==tokens[i])
                    l=i-1;
            }
        }
        cout<<sum<<endl;
        --t;
    }
}

