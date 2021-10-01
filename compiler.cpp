#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;
bool match(char a, char b){
if(a=='<' && b=='>')
    return 1;
else
    return 0;
}


int main(){
    int t;
    cin>>t;
    while(t){
        string str;
        ll c=0,maxc=0;
        cin>>str;
        stack <char> stck;
        for(int i=0;i<str.length();i++){
            if(str[i]=='<')
                stck.push(str[i]);
            if(str[i]=='>'){
                if(stck.empty())
                    break;
                else {
                    char temp=stck.top();
                    stck.pop();
                    if(match(temp,str[i]))
                        c++;
                }
            }
            if(stck.empty()){
                if(c>maxc)
                    maxc=c;
                c=0;
            }
        }
        cout<<maxc*2<<endl;
        --t;
    }
}

