int countStepsTo1(int n) 
{
    int ans = 0;
    
	while (n > 1) 
	{
        if (n % 3 == 0)
            n = n / 3;
        else if ((n - 1) % 3 == 0)
            n -= 1;
        else if (n % 2 == 0)
            n = n / 2;
        else
            n -= 1;
        
		ans++;
    }
    return (ans);
}
