#include <bits/stdc++.h>
int ans = INT_MIN;

void helper(int budget[], int n) 
{
    if (n == 0)
        return;
    
    int s = budget[0] * n;
    
    if (s > ans)
        ans = s;
    
    helper(budget + 1, n - 1);
}

int maximumProfit(int budget[], int n) 
{
    sort(budget, budget + n);
    helper(budget, n);
    return (ans);
}
