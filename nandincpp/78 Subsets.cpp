//https://leetcode.com/problems/subsets/
//LOOK AT ANOTHER SOL TOO.

#include <bits/stdc++.h>
using namespace std;

void fun(char *in,char *out,int i,int j)
{
    //Base
    if(i==-1)
    {
        out[j]='\0';
        cout<<out<<endl;
        return;
    }

    //Rec
    out[j]=in[i];
    fun(in,out,i-1,j+1);

    fun(in,out,i-1,j);

}

int main()
{
    char in[100];
    char out[100];

    cin>>in;


    fun(in,out,3,0);
    return 0;
}
