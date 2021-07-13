#include <stack>

int countBracketReversals(string c) 
{
    stack < char > a;
    int len = c.length();
    
    if (len % 2 != 0)
        return -1;
    
    for (int i = 0; i < len; i++) 
    {
        if (c[i] == '{')
            a.push(c[i]);
        else if (!a.empty() && a.top() == '{' && c[i] == '}')
            a.pop();
        else
            a.push(c[i]);
    }
    
    int count = 0;
    
    while (!a.empty()) 
    {
        int c1 = a.top();
        a.pop();
        int c2 = a.top();
        a.pop();
        
        if (c1 == c2)
            count += 1;
        else 
            count += 2;
    }
    
    return count;
}
