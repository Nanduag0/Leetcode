#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;
int main(){
	int t;
	cin>>t;
	bool ar[1000000001];
	long long int max=1000000000;
	ar[1]=ar[0]=true;
	for(long long int i=2;i*i<=max;i++){
		if(ar[i]==false){
			for(long long int j=i*i;j<=max;j=j+i)
			ar[j]=true;
		}
	}
	while(t){
		long long int m,n;
		cin>>m>>n;
		for(long long int i=m;i<=n;i++){
			if(ar[i]==0)
			cout<<i<<endl;
		}
		cout<<endl;
		--t;
	}
}
