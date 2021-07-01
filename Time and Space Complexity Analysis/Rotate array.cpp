void rotate(int arr[], int d, int size) 
{
    int b[size], k;
    int i;
    
    for (i = 0; i < size; i++)
        b[i] = arr[i];

    for (i = size - 1; i >= 0; i--) 
    {
        if ((i - d) < 0)
            k = i - d + size;
        else
            k = i - d;
        
        arr[k] = b[i];
    }
}
