#include <vector>
#include <queue>

vector < int > mergeKSortedArrays(vector < vector < int > * > input) 
{
    int i, j;
    vector < int > ans;
    priority_queue < int, vector < int > , greater < int >> b;
    
	for (i = 0; i < input.size(); i++) 
	{
        vector < int > * front = input[i];
        
		for (j = 0; j < front -> size(); j++)
            b.push(front -> at(j));
    }
    
    while (b.size() != 0) 
	{
        ans.push_back(b.top());
        b.pop();
    }
    
	return (ans);
}
