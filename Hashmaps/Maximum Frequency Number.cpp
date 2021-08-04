#include <unordered_map>

int highestFrequency(int * input, int n) 
{
    unordered_map < int, int > mp;

    for (int i = 0; i < n; i++)
        mp[input[i]]++;

    int ans = -1;
    int freq = 0;

    for (int i = 0; i < n; i++) 
    {
        if (mp[input[i]] > freq)
        {
            freq = mp[input[i]];
            ans = input[i];
        }
    }

    return ans;
}
