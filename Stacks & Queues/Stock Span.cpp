#include <stack>

int * stockSpan(int * price, int size) 
{
    stack < int > a;
    
    int * p = new int[size];
    int i = 1;
    p[0] = 1;
    a.push(price[0]);
    
    int l = 0;
    
    for (; i < size; i++) 
    {
        if (price[i] <= a.top()) 
        {
            p[i] = 1;
            a.push(price[i]);
        } 
        else 
        {
            int q = 0;
            
            stack < int > b = a;
            
            while (b.size() != 0)
            {
                if (b.top() >= price[i])
                {
                    break;
                }
                else 
                {
                    q++;
                    b.pop();
                    l++;
                }
            }
            
            if (a.size() == 0) 
            {
                p[i] = i + 1;
                b.push(price[i]);
                b = a;
            } 
            else 
            {
                p[i] = q + 1;
                a.push(price[i]);
            }
        }

    }
    return (p);
}
