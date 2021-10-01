#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;
int main(){
    ll n,d,count=0;
    cin>>n>>d;
    ll ar[n];
    for(int i=0;i<n;i++){
        cin>>ar[i];
    }
    sort(ar,ar+n);
    for(int i=0;i<n-1;i++){
    if(ar[i+1]-ar[i]<=d){
        count++;i++;
    }
    }

    cout<<count<<endl;

}

