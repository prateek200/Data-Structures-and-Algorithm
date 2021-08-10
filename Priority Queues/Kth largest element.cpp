#include <queue>

int kthLargest(int * input, int n, int k) 
{
    priority_queue < int, std::vector < int > , std::greater < int >> a;
    int i;
    
    for (i = 0; i < k; i++) 
	{
        a.push(input[i]);
    }

    for (i = k; i < n; i++) 
	{
        if (a.top() < input[i]) 
		{
            a.pop();
            a.push(input[i]);
        }
    }

    return (a.top());
}
