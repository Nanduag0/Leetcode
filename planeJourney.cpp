#include<bits/stdc++.h>
using namespace std;
int ar1[1000],ar2[1000];
int main(){
int t,n,s,rem;
cin>>t;
while(t){
    cin>>n>>s;
    rem=100-s;
    for(int i=0;i<n;i++)
        cin>>ar1[i];
    for(int i=0;i<n;i++)
        cin>>ar2[i];
    int mini=9999;
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(ar2[i]+ar2[j]==1){
                if(ar1[i]+ar1[j]<mini)
                       mini=ar1[i]+ar1[j];
            }
        }
    }
    if(mini<=rem)
        cout<<"yes"<<endl;
    else
        cout<<"no"<<endl;
    --t;
}
}
