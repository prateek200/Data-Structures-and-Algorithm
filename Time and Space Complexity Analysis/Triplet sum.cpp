int tripletSum(int * arr, int n, int num) 
{
    int ans = 0;

    for (int i = 0; i < n; i++) 
    {
        for (int j = i + 1; j < n; j++) 
        {
            for (int z = j + 1; z < n; z++) 
            {
                if (arr[i] + arr[j] + arr[z] == num)
                    ans++;
            }
        }
    }

    return ans;
}
