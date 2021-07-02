#include<unordered_map>

void intersection(int * arr1, int * arr2, int n, int m) 
{
    unordered_map < int, int > m1, m2;
    vector < int > ans;

    for (int i = 0; i < n; i++) 
    {
        m1[arr1[i]] = m1[arr1[i]] + 1;
    }

    for (int i = 0; i < m; i++) 
    {
        m2[arr2[i]] = m2[arr2[i]] + 1;
    }

    for (auto it = m1.begin(); it != m1.end(); it++) 
    {
        int x = it -> first;
        int y = it -> second;

        if (y > m2[x])
            y = m2[x];

        for (int i = 0; i < y; i++)
            ans.push_back(x);
    }

    sort(ans.begin(), ans.end());

    for (int i = 0; i < ans.size(); i++)
        cout << ans[i] << " ";
}
