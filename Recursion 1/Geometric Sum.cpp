double geometricSum(int k, float s = 0, float l = 0.5) 
{
    if (k == 0)
    {
        return (s + 1);
    }
        
    s += l;
    l *= 0.5;

    float ans = geometricSum(k - 1, s, l);
    
    return (ans);
}
