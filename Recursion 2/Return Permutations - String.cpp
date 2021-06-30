#include <iostream>
#include <string>
using namespace std;

int count = 0;

void swap(char * x, char * y) 
{
    char temp = * x;
    * x = * y;
    * y = temp;
}

void printPermutations(string a, string output[], int i) 
{
    if (i == a.length() - 1) 
    {
        output[count] = a;
        count++;
    } 
    else
    {
        for (int j = i; j < a.length(); j++) 
        {
            swap(a[i], a[j]);
            printPermutations(a, output, i + 1);
            swap(a[i], a[j]);
        }
    }
}

int returnPermutations(string a, string output[]) 
{
    printPermutations(a, output, 0);
    return (count);
}
