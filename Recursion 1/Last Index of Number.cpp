int lastIndex(int input[], int size, int x) 
{    
    // Base Case
    if(size==0)
    {
        return -1;
    }
         
    int index = lastIndex(input + 1, size - 1, x);
    
    if(index == -1 && input[0] == x)
    {
        return 0;
    }
    else if(index == -1)
    {
        return -1;
    }
         
    return index + 1;
}

