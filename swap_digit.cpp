#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int a,b;cin>>a>>b;
        if(a/10!=0 &&b/10!=0)
        {
            int max=0;
            if((a+b)>max){max=a+b;}
            if((((b/10)*10)+(a%10)+((a/10)*10)+(b%10))>max)
            {max=(((b/10)*10)+(a%10)+((a/10)*10)+(b%10));}
            if((((b%10)*10)+(a%10)+((b/10)*10)+(a/10))>max)
            {max=(((b%10)*10)+(a%10)+((b/10)*10)+(a/10));}
            if((((a/10)*10)+(b/10)+((a%10)*10)+(b%10))>max)
            {max=(((a/10)*10)+(b/10)+((a%10)*10)+(b%10));}
            cout<<max<<endl;
        }
        else if(a/10==0&&b/10==0)
        {cout<<a+b<<endl;}
        else if(a/10==0&&b/10!=0)
        {
            int max=0;
            if(a+b>max){max=a+b;}
            if(((b/10)+(a*10)+(b%10))>max){max=((b/10)+(a*10)+(b%10));}
            if(((b%10)+(a)+((b/10)*10))>max){max=((b%10)+(a)+((b/10)*10));}
            cout<<max<<endl;
        }
        else if(b/10==0&&a/10!=0)
        {
            int max=0;
            if(a+b>max){max=a+b;}
            if(((a/10)+(b*10)+(a%10))>max){max=((a/10)+(b*10)+(a%10));}
            if(((a%10)+(b)+((a/10)*10))>max){max=((a%10)+(b)+((a/10)*10));}
            cout<<max<<endl;
        }
    }
    return 0;
}
