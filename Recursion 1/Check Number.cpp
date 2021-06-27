bool checkNumber(int input[], int size, int x) 
{	
    // Base Case
    if(size == 0)
    {
    	return false;    
    }
    
 	if( input[0] == x )
    {
        return true;
    }
    	
    bool is=checkNumber(input + 1,size - 1,x);
    
    return(is);
}

