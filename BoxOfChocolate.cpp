#include<iostream>
using namespace std;


bool KthSetBit(int n,int k){
    int i=-1;
    if(k){
        while(i!=k-1){
            n=n>>1;
            i++;
        }
    }
    if(n&1==1)
        return 1;
    else
        return 0;
}

int main()
 {
	int t;cin>>t;
	while(t){
	    int n,k;
	    cin>>n>>k;
	    if(KthSetBit(n,k))
            cout<<"Yes"<<endl;
	    else
            cout<<"No"<<endl;
	    --t;
	}
}
