int stringToNumber(char input[], int s = 0, int i = 0) 
{
    if (input[i] == '\0') 
    {
        return (s);
    }

    s *= 10;
    s += +int(input[i]) - 48;
    i++;
    
    int ans = stringToNumber(input, s, i);
    
    return (ans);
}
