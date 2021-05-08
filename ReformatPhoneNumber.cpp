class Solution {
public:
    string reformatNumber(string number) 
    {
        string s="";
        if(number=="")
        {
            return "";
        }
        else
            if(number.length()<3)
            {
                return number;
            }
        for(int i=0;i<number.length();i++)
        {
           if(number[i]==' ' || number[i]=='-')
           {
               continue;
           }
            else
            {
                s+=number[i];
            }
        }
        int blocks=s.length()/3 ;
        int rem=s.length()%3;
        if(s.length()%3==1)
        {
            blocks--;
            rem=4;
        }
        int p=0;
        string ss="";
        while(blocks!=0 && p<s.length())
        {
         string h=s.substr(p,3)+"-";   
         if(blocks==1)
         {
             ss+=s.substr(p,3);
         }
            else
         ss+=h;
         blocks--;
         p+=3;       
        }
         if(rem==2)
         {
             if(ss!="")
             ss+="-";
             ss+=(s.substr(p,rem));
         }
        else
            if(rem==3)
            {
                if(ss!="")
                ss+="-";
                ss+=s.substr(p,rem);
            }
        else
            if(rem==4)
            {
                if(ss!="")
                ss+="-";
                ss+=s.substr(p,2)+"-";
                ss+=s.substr(p+2,2);
            }
        
        return ss;   
    }
};