int arrayRotateCheck(int arr[], int n) 
{
  int i, s, j;
  j = 0;
  s = arr[0];

  for (i = 0; i < n; i++) 
  {
    if (s > arr[i]) 
    {
      j = i;
      s = arr[i];
    }
  }
  
  return (j);
}
