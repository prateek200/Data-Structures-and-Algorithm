int print(int input[], int size, int output[][50], int k, int out[], int m = 0, int n = 0) 
{
    if (size == 0) 
    {
        if (k == 0) 
        {        
            for (int i = 0; i < m; i++)
                output[n][i + 1] = out[i];
            
            output[n][0] = m;

            return (n + 1);
        }
        
        return (n);
    }
    
    int ans = print(input + 1, size - 1, output, k, out, m, n);
    
    out[m] = input[0];
    
    int l = print(input + 1, size - 1, output, k - input[0], out, m + 1, ans);
    
    return (l);
}

int subsetSumToK(int input[], int n, int output[][50], int k) 
{
    int out[1000];
    
    int ans = print(input, n, output, k, out);
    
    return (ans);
}
