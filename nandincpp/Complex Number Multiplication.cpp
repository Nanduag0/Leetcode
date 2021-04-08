class Solution {
public:
    string complexNumberMultiply(string A, string B)
    {
        stringstream ssa(A),ssb(B);
        string str;
        
        string a,b,c,d;
        
        int i=0;
        
        while(getline(ssa,str,'+'))
        {   
            if(i==0)
                a=str;
            else
                b=str;
            i++;
        }
        
        i=0;
        str.clear();// = "";
        while(getline(ssb,str,'+'))
        {   
            if(i==0)
                c=str;
            else
                d=str;
            i++;
        }
        b.pop_back();
        d.pop_back();
        
        int firstPart = stoi(a) * stoi(c) - stoi(b) * stoi(d);
        int secondPart = stoi(a) * stoi(d) + stoi(b) * stoi(c);
        
        return to_string(firstPart)+"+"+to_string(secondPart)+"i";
        }
};