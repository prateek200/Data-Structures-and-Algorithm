int count(int n)
{
    // Base Case
    if(n == 0)
    {
        return 0;
    }
    
    // Recursive Call
    int smallAns = count(n / 10);
    
    return smallAns + 1;
}
