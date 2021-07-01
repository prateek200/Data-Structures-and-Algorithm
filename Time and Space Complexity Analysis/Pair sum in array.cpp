int pairSum(int input[], int size, int x) 
{    
    int ans = 0;
    
    for(int i = 0;i<size-1;i++)
    {
        for(int j=i+1;j<size;j++)
        {
            if((input[i]+input[j])==x)
            {
 				ans++;               
            }
        }
    }

    return ans;
}
	
