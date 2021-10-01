#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
/*
ll func(ll x){
    vector <ll> diff;
    for(ll i=1;i*i<=x;i++){
        if(x%i==0){
         if(x/i==i)
            diff.push_back(0);
        else{
            diff.push_back(abs(x/i-i));
        }
        }
    }
    sort(diff.begin(),diff.end());
    return diff[0];
}


int main(){
    int t;
    cin>>t;
    while(t){
        ll cake;
        cin>>cake;
        ll mini= func(cake);
        cout<<mini<<endl;
        --t;
    }
}*/

ll fact(ll n) {
   if ((n==0)||(n==1))
      return 1;
   else
      return n*fact(n-1);
}


int main(){

for(ll i=1;i<=100;i++)
cout<<i<<" "<<fact(i)<<endl;

}

