class Solution {
    public int minSwaps(String s) 
    {
        Stack<Character> stk = new Stack<> ();
        
        for(char c : s.toCharArray())
        {
            if(c == '[')
                stk.push(c);
            else
            {
                if(!stk.isEmpty())
                    stk.pop();
            }
        }
        
        return (stk.size()+1)/2;
    }
}