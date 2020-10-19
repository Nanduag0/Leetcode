//https://leetcode.com/problems/generate-parentheses/

#include <bits/stdc++.h>
using namespace std;

void fun(int o,int c,char ans[],int n,int i)
{
    //Base Case
    if(i==2*n)
    {
        ans[i]='\0';
        cout<<ans<<endl;
        return;
    }

    //Recursion

    if(o<n)
    {
        ans[i]='(';
        fun(o+1,c,ans,n,i+1);
    }

    if(c<o)
    {
        ans[i]=')';
        fun(o,c+1,ans,n,i+1);
    }


}

int main()
{
    int n;
    cin>>n;

    char ans[100];
    fun(0,0,ans,n,0);

    return 0;
}
