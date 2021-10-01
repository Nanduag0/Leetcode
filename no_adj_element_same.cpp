#include<bits/stdc++.h>
using namespace std ;
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define mod 1000000007;
#define ll long long int

int main(){
int t;cin>>t;
while(t--){
string s;cin>>s;
map <char,ll> mp;
for(ll i=0;i<s.length();i++){
    mp[s[i]]++;
}
int maxi=INT_MIN;
vector <pair<ll,char>> freqq;
for(auto it:mp){
    if(it.second>maxi)
        maxi=it.second;
    freqq.push_back(make_pair(it.second,it.first));
}
sort(freqq.begin(),freqq.end(),greater<pair<ll,char>>());
if(maxi<= s.length()-maxi+1){
    string s1;
    for(ll i=0;i<freqq.size();i++){
        if(freqq[i].first>1){
            while(freqq[i].first!=0){
            s1+=freqq[i].second;
            freqq[i].first--;
            }
        }else{
            s1+=freqq[i].second;
            freqq[i].first--;
        }
    }
    string s2,s3;
    for(ll i=0;i<=s1.length()/2;i++)
        s2+=s1[i];
    for(ll i=s1.length()/2+1;i<s1.length();i++)
        s3+=s1[i];
    int i=0,j=0;
    string s4;
    while(i<s2.length() && j<s3.length()){
        if(i<s2.length())
            s4+=s2[i];
        if(j<s3.length())
            s4+=s3[j];
        i++,j++;
    }
    while(i<s2.length()){
        s4+=s2[i];
        i++;
    }
     while(j<s3.length()){
        s4+=s3[j];
        j++;
    }
    cout<<s4<<endl;
}else{
    cout<<0<<endl;
}

}
}
