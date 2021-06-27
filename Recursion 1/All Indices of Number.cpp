int allIndexes(int input[], int size, int x, int output[], int k = 0, int i = 0)
{	
    // Base Case
	if(size==0)
	{
    	return(k);
	}

    if(input[0]==x)
    {
    	output[k] = i; 
    	k++;
	}
    
    int ans = allIndexes(input + 1, size - 1, x, output, k ,i + 1);   
	
    return(ans);
}

