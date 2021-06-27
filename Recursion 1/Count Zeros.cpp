int helper(int n)
{	
    if(n == 0)
        return 0; 
	
    int ans = helper(n / 10); 
    
    if(n % 10 == 0)
        ans++; 
    
    return ans;
}


int countZeros(int n) 
{
	if(n == 0)
    {
    	 return 1;   
    }
    else
    {
    	return helper(n);    
    } 
    
}



