class Polynomial 
{
    public:
    
	int * degCoeff; // Name of your array (Don't change this)
    int capacity;

    // Complete the class
    Polynomial() 
	{
        capacity = 50;
        degCoeff = new int[capacity];
    }
    
	Polynomial(Polynomial const & p) 
	{
        capacity = p.capacity;
        degCoeff = new int[capacity];
        for (int i = 0; i < capacity; i++)
            degCoeff[i] = p.degCoeff[i];
    }
    
    void setCoefficient(int degree, int coeff) 
    {
        if (capacity > degree)
        {
            degCoeff[degree] = coeff;
        }
        else 
        {
            int * n = new int[degree + 1];
            
            for (int i = 0; i < capacity; i++) 
            {
                n[i] = degCoeff[i];
            }
            
            n[degree] = coeff;
            delete[] degCoeff;
            degCoeff = n;
            capacity = degree + 1;
        }
    }
    
	Polynomial operator + (Polynomial const & p) 
	{
        Polynomial p1;
        
        if (p.capacity >= capacity) 
        {
            p1.capacity = p.capacity;
            
            for (int i = 0; i < p.capacity; i++)
                p1.degCoeff[i] = degCoeff[i] + p.degCoeff[i];
        }
        else 
        {
            p1.capacity = capacity;
            
            for (int i = 0; i < capacity; i++)
                p1.degCoeff[i] = degCoeff[i] + p.degCoeff[i];
        }
        
        return (p1);
    }
    
    Polynomial operator - (Polynomial const & p) 
        {
        Polynomial p1;
        
        if (p.capacity >= capacity) 
        {
            p1.capacity = p.capacity;
            
            
            for (int i = 0; i < p.capacity; i++)
                p1.degCoeff[i] = degCoeff[i] - p.degCoeff[i];
        } 
        else
        {
            p1.capacity = capacity;
            
            for (int i = 0; i < capacity; i++)
                p1.degCoeff[i] = degCoeff[i] - p.degCoeff[i];
        }
        
        return (p1);
    }
    
    void operator = (Polynomial const & p) 
    {
        capacity = p.capacity;
        degCoeff = new int[capacity];
        
        for (int i = 0; i < capacity; i++)
            degCoeff[i] = p.degCoeff[i];
    }
    
    void print() 
    {
        for (int i = 0; i < capacity; i++)
            if (degCoeff[i] != 0)
                cout << degCoeff[i] << "x" << i << " ";
        cout << endl;
    }
    
    Polynomial operator * (Polynomial const & p) 
    {
        int i, j, degree;
        Polynomial p1;
        
        for (i = 0; i < capacity; i++)
            for (j = 0; j < p.capacity; j++) 
            {
                p1.setCoefficientM(i + j, degCoeff[i] * (p.degCoeff[j]));
            }
            
        return (p1);
    }
    
    void setCoefficientM(int degree, int coeff) 
    {
        if (capacity > degree)
            degCoeff[degree] += coeff;
        else
        {
            int * n = new int[degree + 1];
            for (int i = 0; i < capacity; i++)
            {
                n[i] = degCoeff[i];
            }
            
            n[degree] = coeff;
            delete[] degCoeff;
            degCoeff = n;
            capacity = degree + 1;
        }
    }
};
