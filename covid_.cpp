#include<bits/stdc++.h>
using namespace std ;
int main(){
int t;
cin>>t;
while(t){
      int n;
      cin>>n;
      int ar[n];
      for(int i=0;i<n;i++){
        cin>>ar[i];
      }
     vector <int> v;
     for(int i=0;i<n;i++){
        if(ar[i]==1)
            v.push_back(i);
     }
     sort(v.begin(),v.end());
     long long int  min=999999,x;
     for(int i=1;i<v.size();i++){
        x=v[i]-v[i-1];
        if(x<min)
            min=x;
     }

     if(min>=6)
        cout<<"YES"<<endl;
     else
        cout<<"NO"<<endl;

    --t;
}

}
