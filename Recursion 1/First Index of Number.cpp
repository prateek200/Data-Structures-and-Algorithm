int firstIndex(int input[], int size, int x)
{	
    // Base Case
	if(size==0)
	{
        return(-1);
    }
	
    if(input[0]==x)
    {
    	return(0);    
    }
	
    // Recursive Call
	int ind = firstIndex(input + 1, size - 1,x);    
 
    if(ind == -1)
    {
        return(-1);
    }
	else
    {
        return(1 + ind);
    }
}

