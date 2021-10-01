#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin>>T;
	while(T--)
	{
	    int N;
	    cin>>N;

	    int o=0,tw=0,th=0;
	    for(int i=0;i<N;i++)
	    {
	        int temp;
	        cin>>temp;
	        if(temp%4==0){continue;}
	        if(temp%4==1){o++;}
	        if(temp%4==2){tw++;}
	        if(temp%4==3){th++;}
	    }

	    if((o+2*tw+3*th)%4!=0){cout<<"-1"<<endl;}
	    else
	    {
	     int steps=0;
	     int l;
	     if(o<th){steps+=o;l=th-o;}
	     else{steps+=th;l=o-th;}
	     steps+=(l/2);
	     tw+=(l/2);

	     steps+=(tw/2);
	     cout<<steps<<endl;
	    }
	}

	return 0;
}


