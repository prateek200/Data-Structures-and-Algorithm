#include <bits/stdc++.h>

void heapSort(int input[], int n) 
{
    std::sort(input, input + n);

    for (int i = 0; i < (n / 2); i++) 
	{
        int temp = input[i];
        input[i] = input[n - 1 - i];
        input[n - 1 - i] = temp;
    }
}
