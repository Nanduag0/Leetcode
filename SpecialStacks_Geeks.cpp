void push(stack<int>& s, int a){
	// Your code goes here
	s.push(a);
	
}

bool isFull(stack<int>& s,int n){
	// Your code goes here
	if(s.size()==n)
	return true;
	else
	return false;
	
}

bool isEmpty(stack<int>& s)
{
    if(s.empty())
    return true;
    else
    return false;
    	// Your code goes here
}

int pop(stack<int>& s)
{
	// Your code goes here
	int x=s.top();
	s.pop();
	return x;
}

int getMin(stack<int>& s){
	// Your code goes here
	int minim=100000;
	
	while(!(isEmpty(s)))
	{
	int j=pop(s);
    if(j<=minim)
	{
	    minim=j;
	}  
	}
	return minim;
	
}