#include <queue>

int buyTicket(int * arr, int n, int k) 
{
    int ans = 0, i;
    queue < int > a;
    priority_queue < int > b;
    
	for (i = 0; i < n; i++) 
	{
        a.push(arr[i]);
        b.push(arr[i]);
    }
    
	while (true) 
	{
        if (a.front() != b.top()) 
		{
            a.push(a.front());
            a.pop();
            
			if (k == 0)
                k = a.size() - 1;
            else
                k -= 1;
        } 
		else
		{
            a.pop();
            b.pop();
            ans += 1;
            
			if (k == 0)
			{
                break;
        	}
			else 
			{
                k -= 1;
            }
        }
    }
    
    return (ans);
}
