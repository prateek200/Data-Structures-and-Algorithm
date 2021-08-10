#include <queue>

vector < int > kLargest(int input[], int n, int k) 
{
    priority_queue < int, vector < int > , greater < int >> a;
    vector < int > ans;
    int i;
    
	for (i = 0; i < k; i++)
        a.push(input[i]);
    
	for (i = k; i < n; i++) 
	{
        if (a.top() < input[i]) 
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
