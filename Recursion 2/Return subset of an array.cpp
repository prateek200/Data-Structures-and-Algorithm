int loop(int input[], int output[][20], int n, int k) 
{
    if (n < 0)
        return (k);
    
    int l = k;

    for (int i = 0; i < l; i++, k++) 
    {
        for (int j = 1; j <= output[i][0]; j++)
            output[k][j + 1] = output[i][j];

        output[k][0] = output[i][0] + 1;
        output[k][1] = input[n];
    }
    
    n--;
    loop(input, output, n, k);
}

int subset(int input[], int n, int output[][20]) 
{
    output[0][0] = 0;
    output[1][0] = 1;
    output[1][1] = input[n - 1];
    
    int k = loop(input, output, n - 2, 2);
    return (k);
}
