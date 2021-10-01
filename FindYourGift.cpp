#include<bits/stdc++.h>
using namespace std;
int main(){
  int t;
  cin>>t;
  while(t){
     int n;cin>>n;
     string str;
     cin>>str;
     int x=0,y=0;
     bool conL=0,conR=0,conU=0,conD=0;
     for(int i=0;i<n;i++){

        if(str[i]=='L'){
            if(!conL){
               x--;
               if(i+1==n)
            break;
              if(str[i+1]=='R' || str[i+1]=='L'){
                conL=1;
                conR=1;
            }else conL=0,conR=0;

            }
              conD=conU=0;
        }

        if(str[i]=='R'){
        if(!conR && !conL){
                x++;
            if(i+1==n)
            break;
            if(str[i+1]=='R' || str[i+1]=='L'){
                conR=1;
                conL=1;
            }else {
             conR=0;
             conL=0;
            }
            }
            conD=conU=0;
        }

        if(str[i]=='U'){
        if(!conU && !conD){
            y++;
            if(i+1==n)
            break;
            if(str[i+1]=='U' || str[i+1]=='D'){
                conU=1;
                conD=1;
            }else {
             conU=0;
             conD=0;
            }
        }
        conL=conR=0;
        }

        if(str[i]=='D'){
        if(!conD && !conU){
                y--;
                if(i+1==n)
            break;
            if(str[i+1]=='U' || str[i+1]=='D'){
                conD=1;
                conU=1;
            }else {
             conD=0;
             conU=1;
            }
            }
              conL=conR=0;
     }
}
     cout<<x<<" "<<y<<endl;

    --t;
  }
}
