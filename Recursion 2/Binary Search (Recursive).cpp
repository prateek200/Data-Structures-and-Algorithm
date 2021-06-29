int binary_search(int input[], int start, int end, int element)
{
    if (start > end)
        return -1;

    int mid = (start + end) / 2;

    if (input[mid] == element) 
    {
        return mid;
    } 
    else if (input[mid] > element) 
    {
        return binary_search(input, start, mid - 1, element);
    } 
    else 
    {
        return binary_search(input, mid + 1, end, element);
    }

}

int binarySearch(int input[], int size, int element)
{
    int ans = binary_search(input, 0, size - 1, element);

    return ans;
}
