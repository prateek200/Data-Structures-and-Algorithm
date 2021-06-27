void print(int n)
{
    // Base Case 
    if(n == 0)
    {
    	return;    
    }
    
    // Recursive call 
    print(n - 1);    
    
    cout<<n<<" ";
}
