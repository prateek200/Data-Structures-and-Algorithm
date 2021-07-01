int findDuplicate(int a[], int size) {

    int i, j, s, k;
    
    for (i = 0; i < (size / 2); i++) 
    {
        s = 0;
        k = 0;
        
        for (j = 0; j < size; j++) 
        {
            if (a[j] == a[i])
                s++;
            if (a[j] == a[size - i])
                k++;
        }
        
        if (s == 2)
            return (a[i]);
        
        if (k == 2)
            return (a[size - i]);
    }
}
