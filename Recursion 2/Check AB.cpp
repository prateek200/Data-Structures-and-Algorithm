bool check(char a[], int i) 
{
    if (a[i] == '\0' || a[i + 1] == '\0')
        return (1);
    
    if (a[i] == 'a' && a[i + 1] == 'b' && a[i + 2] == 'b') 
    {
        i += 2;
    } 
    else if (a[i] == 'a' && a[i + 1] == 'a')
    {
        i += 1;
    }
    else if (a[i] == 'b' && a[i + 1] == 'a')
    {
        i += 1;
    }
    else
    {
        return (0);
    }
        
    check(a, i);
}

bool checkAB(char input[]) 
{
    if (input[0] != 'a')
        return (0);
    
    bool ans = check(input, 0);
    
    return (ans);
}
