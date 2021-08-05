#include <unordered_map>

vector < int > longestConsecutiveIncreasingSequence(int * arr, int n) 
{
    unordered_map < int, int > a;
    int i;
    int freq = -10000, ans = 0, position = 0;
    
	for (i = 0; i < n; i++)
        if (a.count(arr[i]) == 0)
            a[arr[i]] = i;

    unordered_map < int, int > ::iterator b;
    
	for (b = a.begin(); b != a.end(); b++) 
	{
        int s = b -> first, k = 0;
        
		while (a.count(s) != 0) 
		{
            s++;
            k++;
        }
        
		if (k == freq) 
		{
            if (position > b -> second) 
			{
                ans = b -> first;
                position = b -> second;
            }
        }
		else if (k > freq) 
		{
            freq = k;
            ans = b -> first;
            position = b -> second;
        }
    }
    
	vector < int > output;
    
	for (i = 0; i < freq; i++)
        output.push_back(ans + i);
        
    return (output);
}
