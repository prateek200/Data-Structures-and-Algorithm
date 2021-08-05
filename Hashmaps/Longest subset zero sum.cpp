int lengthOfLongestSubsetWithZeroSum(int * arr, int size) {

    std::unordered_map < int, int > a;

    int i, s = 0, max = 0;
    
	for (i = 0; i < size; i++)
	 {
        s += arr[i];
        
		if (s == 0 && i > max)
            max = i + 1;
        
		if (a.count(s) == 0)
		{	
            a[s] = i + 1;
        }
        else 
		{
            if ((i - a[s]) > max)
                max = i - a[s] + 1;
        }
    }
    return (max);
}
