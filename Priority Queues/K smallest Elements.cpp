#include <queue>

vector < int > kSmallest(int * input, int n, int k) 
{
    priority_queue < int > a;
    int i;
    vector < int > ans;
    
    for (i = 0; i < k; i++)
        a.push(input[i]);
    
    for (i = k; i < n; i++) 
    {
        if (a.top() > input[i])
        {
            a.pop();
            a.push(input[i]);
        }
    }
    
    for (i = 0; i < k; i++) 
    {
        ans.push_back(a.top());
        a.pop();
    }
    
    return (ans);
}
