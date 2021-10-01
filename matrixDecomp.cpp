#include<bits/stdc++.h>
using namespace std;
int main(){
vector <int> arr={1,2,3,4,5};
cout<<arr.size();
while(!arr.empty())
arr.erase(arr.begin());

cout<<arr.size();
}

