#include <iostream>
using namespace std;

bool check(int arr[], int n, int par) 
{
    if (par >= n)
        return (1);
        
    int chi1 = (par * 2) + 1;
    int chi2 = (par * 2) + 2;
    
	if (chi1 >= n)
        return (1);
    
	if (arr[chi1] > arr[par])
        return (0);
    
	if (chi2 < n && arr[chi2] > arr[par])
        return (0);
    
	bool ans = check(arr, n, chi1);
    
	if (ans == 0)
        return (0);
    
	bool ans1 = check(arr, n, chi2);
    
	if (ans == 0)
        return (0);
    else
        return (ans1);
}

bool isMaxHeap(int arr[], int n) 
{
    return (check(arr, n, 0));
}
