bool ans(int arr[], int j, int k, int s) 
{
    if (j == 0) 
    {
        if (k == s)
            return (1);
        
        return (0);
    }

    bool a = ans(arr + 1, j - 1, k + arr[0], s);
    
    if (a == 1)
        return (1);
    
    bool b = ans(arr + 1, j - 1, k, s + arr[0]);
    
    if (b == 1)
        return (1);
    else
        return (b);
}

bool splitArray(int * input, int size)
{
    int s = 0, k = 0;
    int arr[1000], j = 0;
    
    for (int i = 0; i < size; i++) 
    {
        if (input[i] % 5 == 0)
        {
            s += input[i];
        }
        else if (input[i] % 3 == 0)
        {
            k += input[i];
        }
        else 
        {
            arr[j] = input[i];
            j++;
        }
    }
    
    if (j == 0)
    {
        return (1);
    }
    else
    {
        return (ans(arr, j, k, s));
    }
}
