int countStepsToOne(int n) 
{
    int * a = new int[n + 1], i;
    a[1] = 0;
    a[2] = 1;
    a[3] = 1;
    
	for (i = 2; i <= n; i++) 
	{
        int x = INT_MAX, y = INT_MAX;
        
		if (i % 3 == 0)
            x = a[i / 3];
        
		if (i % 2 == 0)
            y = a[i / 2];
        
		a[i] = 1 + min(a[i - 1], min(x, y));
    }
    
    return (a[n]);
}
