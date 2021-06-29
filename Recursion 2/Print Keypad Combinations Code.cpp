#include <iostream> 
#include <string>
using namespace std;

void printkeypad(int num, string output) 
{
    if (num == 0) 
    {
        cout << output << endl;
        return;
    }
    
    if (num % 10 == 1)
        return;
    
    if (num % 10 == 2) 
    {
        printkeypad(num / 10, "a" + output);
        printkeypad(num / 10, "b" + output);
        printkeypad(num / 10, "c" + output);
    } 
    else if (num % 10 == 3) 
    {
        printkeypad(num / 10, "d" + output);
        printkeypad(num / 10, "e" + output);
        printkeypad(num / 10, "f" + output);
    } 
    else if (num % 10 == 4)
    {
        printkeypad(num / 10, "g" + output);
        printkeypad(num / 10, "h" + output);
        printkeypad(num / 10, "i" + output);
    } 
    else if (num % 10 == 5) 
    {
        printkeypad(num / 10, "j" + output);
        printkeypad(num / 10, "k" + output);
        printkeypad(num / 10, "l" + output);
    } 
    else if (num % 10 == 6) 
    {
        printkeypad(num / 10, "m" + output);
        printkeypad(num / 10, "n" + output);
        printkeypad(num / 10, "o" + output);
    } 
    else if (num % 10 == 7) 
    {
        printkeypad(num / 10, "p" + output);
        printkeypad(num / 10, "q" + output);
        printkeypad(num / 10, "r" + output);
        printkeypad(num / 10, "s" + output);
    } 
    else if (num % 10 == 8) 
    {
        printkeypad(num / 10, "t" + output);
        printkeypad(num / 10, "u" + output);
        printkeypad(num / 10, "v" + output);
    }
    else if (num % 10 == 9) 
    {
        printkeypad(num / 10, "w" + output);
        printkeypad(num / 10, "x" + output);
        printkeypad(num / 10, "y" + output);
        printkeypad(num / 10, "z" + output);
    }
    
    return;
}

void printKeypad(int num) 
{
    string output = "";
    printkeypad(num, output);
    return;
}
