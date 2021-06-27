#include <string.h>

bool helper(char input[], int start, int end) 
{
	if(start >= end)
        return true; 
    
    if(input[start] != input[end])
        return false;
    
    return helper(input, start + 1, end - 1);
}

bool checkPalindrome(char input[])
{
    return helper(input, 0, strlen(input) - 1);
}
