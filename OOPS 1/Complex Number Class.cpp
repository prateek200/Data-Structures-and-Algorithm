class ComplexNumbers 
{
  public:
    int real, imaginary;
  
  ComplexNumbers(int a, int b) 
  {
    real = a;
    imaginary = b;
  }
  
  void plus(ComplexNumbers
    const & c) 
    {
    real = real + c.real;
    imaginary = imaginary + c.imaginary;

  }
  
  void print() 
  {
    cout << real << " + i" << imaginary;
  }
  
  void multiply(ComplexNumbers
    const & c) 
    {
    int k = real, l = imaginary;
    real = (real * (c.real)) - (imaginary * (c.imaginary));
    imaginary = (k * (c.imaginary)) + (l * (c.real));
  }
};
