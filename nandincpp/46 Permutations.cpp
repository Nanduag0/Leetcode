

//https://leetcode.com/problems/permutations/



#include <bits/stdc++.h>
using namespace std;

void permute(string in,char i)
{
    //Base case
    if(in[i] == '\0')
    {
        cout<<in<<endl;
        
        return;
    }

    //Recursion Case
    for(int j=i;in[j]!='\0';j++)
    {
        swap(in[i],in[j]);

        permute(in,i+1);

        //Backtracking 
        swap(in[i],in[j]);
    }

}

int main()
{
    string in;;
    cin>>in;

    permute(in,0);
    
    return 0;
}
