#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;

int GCD(int a,int b){
    if(b==0)
        return a;
    else
        return GCD(b,a%b);
}

int main(){
    int t;
    cin>>t;
    while(t){
    int n;
    cin>>n;
    ll ar[n];
    for(int i=0;i<n;i++)
        cin>>ar[i];
    int gcdd[n] ;
    gcdd[0]= ar[0];
    for(int i=1;i<n;i++){
        gcdd[i] =GCD(gcdd[i-1],ar[i]);
    }

    cout<<gcdd[n-1]<<endl;
    --t;
    }

}
