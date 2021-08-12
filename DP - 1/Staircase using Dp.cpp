long staircase(int n) 
{
    long * a = new long[n + 1];
    
	if (n == 1)
	{
        return (1);
    }
	else if (n == 2)
	{
        return (2);
	}
	else if (n == 3)
	{
        return (4);
	}
	else 
	{
        a[1] = 1;
        a[2] = 2;
        a[3] = 4;
        
		for (int i = 4; i <= n; i++)
            a[i] = a[i - 1] + a[i - 2] + a[i - 3];
    }
    
	return (a[n]);
}
