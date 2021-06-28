void removeX(char input[], int i = 0, int j = 0) 
{
    if (input[i] == '\0') 
    {
        input[j] = '\0';
        return;
    }
    
    if (input[i] == 'x') 
    {
        i++;
    } 
    else
    {
        input[j] = input[i];
        j++;
        i++;
    }
    
    removeX(input, i, j);
}
