int findUnique(int a[], int size) 
{
    int i, j, s;
    
    for (i = 0; i < size; i++) 
    {
        s = 0;
        
        for (j = 0; j < size; j++)
        {
            if (a[j] == a[i])
                s++;
        }
            
        if (s == 1)
        {
            return (a[i]);
        }
    }
}
