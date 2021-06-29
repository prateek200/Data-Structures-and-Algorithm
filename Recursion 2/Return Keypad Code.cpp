#include <string>
using namespace std;

string key[] = {"","", "abc", "def", "ghi", 
                "jkl", "mno", "pqrs", "tuv", "wxyz"};

int loop(int a[], string output[], int count, int n) 
{    
    if (count < 0)
        return (n);
    
    int k = n;
    
    for (int i = 1; i < key[a[count]].length(); i++) 
    {    
        for (int j = 0; j < n; j++) 
        {
            output[k] = output[j] + key[a[count]][i];
            k++;
        }
    }
    
    for (int j = 0; j < n; j++) 
    {
        output[j] = output[j] + key[a[count]][0];
    }

    n = k;
    count--;
    loop(a, output, count, n);
}

int keypad(int num, string output[]) 
{
    int a[100], count = 0;
    
    while (num > 0) 
    {
        a[count] = num % 10;
        
        if (a[count] == 1 || a[count] == 0)
            return (0);
        
        count++;
        num = num / 10;
    }
    
    count--;
    int n = 1;
    int ans = loop(a, output, count, n);
}
