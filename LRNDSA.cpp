#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

ll mod=1000000007;
ll exp(ll x, ll n){
ll res=1;
while(n){
    if(n%2==1){
        res=(res*x)%mod;
        n--;
    }else{
    x=(x*x)%mod;
    n/=2;
    }
}
return res;
}

int main(){
   ll x,n;
   cin>>x>>n;
   if(n>=5){
       cout<<1<<endl;
   }
   else if(n==0 || n==1){
    cout<<exp(x,1)<<endl;
   }
   else if(n==2 && x<1000000000){
    cout<<exp(x,2)<<endl;
   }
    else if(n==3 && x<1000000){
    cout<<exp(x,3)<<endl;
   }
   else if(n==4 && x<10000){
    cout<<exp(x,4)<<endl;
   }
    else{
        cout<<1<<endl;
    }
}

/*
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

ll mod=1000000007;
ll exp(ll x, ll n){
ll res=1;
while(n){
    if(n%2==1){
        res=(res*x);
        n--;
    }else{
    x=(x*x);
    n/=2;
    }
}
return res;
}

int main(){
   int x,n;
   cin>>x>>n;
   if(n>=5){
       cout<<1<<endl;
   }
   if(n==0 || n==1){
       int res= pow(x,1);
       cout<<res%10<<endl;
   }
   if(n==2){
      int res=pow(x,2);
       //ll res= exp(x,2);
    cout<<res%10<<endl;
   }
   if(n==3){
    int res= pow(x,6);
    cout<<res%10<<endl;
   }
   if(n==4){
    int res= pow(x,4);
    cout<<res%10<<endl;
   }
}
*/
