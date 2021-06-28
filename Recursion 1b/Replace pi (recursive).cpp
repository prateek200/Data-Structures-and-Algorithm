char output[100];

void replacePi(char input[], int i = 0, int j = 0) 
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

    if (input[i] == 'p' && input[i + 1] == 'i') 
    {
        output[j] = '3';
        output[j + 1] = '.';
        output[j + 2] = '1';
        output[j + 3] = '4';
        i += 2;
        j += 4;
    } 
    else 
    {
        output[j] = input[i];
        i++;
        j++;
    }

    replacePi(input, i, j);
}
