#include <iostream>
using namespace std;

int main() {
	
	int ar[5];
	for(int i=0;i<5;i++)
	cin>>ar[i];
	for(int i=0;i<5;i++){
		if(ar[i]==42)
		break;
		else 
		cout<<ar[i]<<endl;
	}

	return 0;
}
