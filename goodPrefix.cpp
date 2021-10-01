#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{

ll t;
cin>>t;
while(t--){
string s ;
cin>>s ;
ll k,x ;
cin>>k>>x;

ll ans  = 0 ;
map<char,ll> mp ;
mp.clear() ;
for(ll i=0;i<s.size();i++){

mp[s[i]]++;

if( mp[s[i]] > x ){
k-- ;
mp[s[i]]-- ;
if(k<0)break ;
else continue ;
}

ans++;

}

cout<<ans<<endl ;


}




}

