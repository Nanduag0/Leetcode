#include<bits/stdc++.h>
#include<string>
typedef long long int ll;
using namespace std;
int main(){
    ll t;
    cin>>t;
    while(t){
        ll n;
        cin>>n;
        string str;
        cin>>str;
        ll nA=0,nB=0,pA=0,pB=0;
        for(int i=0;i<2*n;i++){
            if(i%2==0){
              if(str[i]=='1')
              nA++;
              pA++;
            }
            else if(i%2==1){
             if(str[i]=='1')
                nB++;
                pB++;
            }
            if((nB-nA)>(n-pA)){
                cout<<i+1<<endl;
                break;
            }
            if((nA-nB)>(n-pB)){
                cout<<i+1<<endl;
                break;
            }
        }
        if(i+1==2*n)
            cout<<2*n<<endl;

        --t;
    }
}

