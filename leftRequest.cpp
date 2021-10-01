#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
int t;
cin>>t;
while(t){
    ll floors,n,q,f,d;
    cin>>n>>q;
    ll dest=0; floors=0;
    while(q){
        cin>>f>>d;
        if(floors==0 && f>d){
            floors+=f+(f-d);
            dest=d;
        }
        else if(floors==0 && f<=d){
        floors+=d;
        dest=d;
        }
        else if(floors>0){
            floors+=abs(dest-f)+abs(d-f);
            dest=d;
        }
        --q;
    }
    cout<<floors<<endl;

    --t;
}
}
