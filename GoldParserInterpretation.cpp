class Solution {
public:
    string interpret(string command) 
    {
        if(command=="")
        {
            return command;
            
        }
        string ans="";
        int i=0;
        while(i<command.length())
        {
            if(command[i]=='G')
            {
                ans+="G";
                i++;
            }
            else
                if(command.substr(i,2)=="()")
                {
                    ans+="o";
                    i+=2;
                }
            else
                if(command.substr(i,4)=="(al)")
                {
                    ans+="al";
                    i+=4;
                }
        }
        return ans;
        
    }
};