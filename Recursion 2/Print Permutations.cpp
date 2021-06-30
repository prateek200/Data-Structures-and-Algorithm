#include <iostream>
#include <string>
using namespace std;

void swap(char * x, char * y) 
{
    char temp = * x;
    * x = * y;
    * y = temp;
}

void printPermutations(string a, int i = 0) 
{
    if (i == a.length() - 1)
    {
        cout << a << endl;
    }
    else 
    {
        for (int j = i; j < a.length(); j++) 
        {
            swap(a[i], a[j]);
            printPermutations(a, i + 1);
            swap(a[i], a[j]);
        }
    }
}
