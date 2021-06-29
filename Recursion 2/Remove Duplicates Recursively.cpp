void removeConsecutiveDuplicates(char * input, char c = 'h', int i = 1, int j = 1, int k = 0) 
{
    c = input[k];
    
    if (input[i] == '\0') 
    {
        input[j] = '\0';
        return;
    }
    
    if (input[i] == c)
    {
        i++;
    }
    else if (input[i] != c)
    {
        input[j] = input[i];
        k = i;
        i++;
        j++;
    }
    
    removeConsecutiveDuplicates(input, c, i, j, k);
}
