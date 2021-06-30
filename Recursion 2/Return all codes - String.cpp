#include <string.h>
using namespace std;
int count = 0;

void print1(string input, int n, string output[], string out) 
{
    if (n == 0) 
    {
        output[count] = out;
        count++;
        return;
    }
    
    char temp = input[0] - '0' - 1 + 'a';
    
    print1(input.substr(1), n - 1, output, out + temp);
    
    if (n > 1) 
    {
        if (input[0] == '1') 
        {
            char temp = input[1] - '0' + 9 + 'a';
            print1(input.substr(2), n - 2, output, out + temp);
        } 
        else if (input[0] == '2' && (input[1] - '0') <= 6) 
        {
            char temp = input[1] - '0' + 19 + 'a';
            print1(input.substr(2), n - 2, output, out + temp);
        }
    }
}

int getCodes(string input, string output[10000]) 
{
    print1(input, input.length(), output, "");
    return (count);
}
