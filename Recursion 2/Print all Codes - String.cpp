#include <string.h>
using namespace std;

void print1(string input, int n, string output) 
{
    if (n == 0) 
    {
        cout << output << endl;
        return;
    }
    
    char temp = input[0] - '0' - 1 + 'a';
    
    print1(input.substr(1), n - 1, output + temp);
    
    if (n > 1) 
    {
        if (input[0] == '1') 
        {
            char temp = input[1] - '0' + 9 + 'a';
            print1(input.substr(2), n - 2, output + temp);
        } 
        else if (input[0] == '2' && (input[1] - '0') <= 6) 
        {
            char temp = input[1] - '0' + 19 + 'a';
            print1(input.substr(2), n - 2, output + temp);
        }
    }
}

void printAllPossibleCodes(string input) 
{
    print1(input, input.length(), "");
}
