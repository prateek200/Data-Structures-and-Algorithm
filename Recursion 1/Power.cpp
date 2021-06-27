int power(int x, int n) 
{  
	// Base Case
    if(n==0)
    {
        return 1;
    }
         
    // Recurive Call
    int ans = x * power(x , n - 1);
    
    
    return ans;
}

