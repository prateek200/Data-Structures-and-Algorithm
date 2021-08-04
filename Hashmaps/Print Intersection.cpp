#include <unordered_map>

void intersection(int input1[], int input2[], int size1, int size2) 
{
    unordered_map < int, int > a;
    
	for (int i = 0; i < size1; i++) 
	{
        if (a.count(input1[i]) == 0)
        {
            a[input1[i]] = 1;
		}
		else 
		{
            int k = a[input1[i]];
            k++;
            a[input1[i]] = k;
        }
    }

    vector < int > ans;
    for (int i = 0; i < size2; i++) 
	{
        if (a.count(input2[i]) > 0) 
		{
            int k = a[input2[i]];

            if (k > 0) 
			{
                ans.push_back(input2[i]);
                k--;
                a[input2[i]] = k;
            }
        }
    }

    sort(ans.begin(), ans.end());

    for (int i = 0; i < ans.size(); i++)
        cout << ans[i] << " ";
}
