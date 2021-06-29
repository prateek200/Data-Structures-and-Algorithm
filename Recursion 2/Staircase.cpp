int staircase(int n, int count = 0) 
{
    if (n <= 0) 
    {
        if (n == 0) 
        {
            return (count + 1);
        } 
        else 
        {
            return (count);
        }
    }
    
    int ans = staircase(n - 1, count);
    int ans1 = staircase(n - 2, ans);
    int k = staircase(n - 3, ans1);
    
    return (k);
}
