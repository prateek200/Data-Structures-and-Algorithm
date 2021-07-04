#include <cstring>

bool checksequenece(char large[], char * small) 
{
    int n = strlen(small);
    
    if (n == 0)
        return (1);
    
    if (large[0] == '\0')
        return (0);

    if (large[0] == small[0]) 
    {
        return (checksequenece(large + 1, small + 1));
    } 
    else
    {
        return (checksequenece(large + 1, small));
    }
}
