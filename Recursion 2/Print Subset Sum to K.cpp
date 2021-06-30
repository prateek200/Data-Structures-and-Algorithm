void print(int input[], int size, int output[], int k, int m)
{
    if (size == 0) 
    {
        if (k == 0) 
        {
            for (int i = 0; i < m; i++)
                cout << output[i] << " ";
            
            cout << endl;
        }
        
        return;
    }
    
    print(input + 1, size - 1, output, k, m);
    
    output[m] = input[0];
    
    print(input + 1, size - 1, output, k - input[0], m + 1);
}

void printSubsetSumToK(int input[], int size, int k)
{
    int output[1000];
    print(input, size, output, k, 0);
}
