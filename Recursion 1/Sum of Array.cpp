int sum(int input[], int n) 
{ 	
    // Base Case
    if(n==0)
    {
        return(0);
    }
    
    // Recursive Call
    int ans = input[0] + sum( input + 1 , n - 1 );    
   
    return(ans); 
}

