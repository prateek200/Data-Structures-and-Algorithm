char output[100];

void pairStar(char input[], int i = 0, int j = 0) 
{
    if (input[i] == '\0') 
    {
        output[j] = '\0';
        
        for (i = 0; output[i] != '\0'; i++) 
        {
            input[i] = output[i];
        }

        input[i] = '\0';
        return;
    }
    
    if (input[i] == input[i + 1]) 
    {
        output[j] = input[i];
        output[j + 1] = '*';
        j += 2;
        i += 1;
    } 
    else
    {
        output[j] = input[i];
        i++;
        j++;
    }

    pairStar(input, i, j);
}
