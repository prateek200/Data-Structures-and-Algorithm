#include<stack>

bool isBalanced(string exp) 
{
    stack<char> s; 
    
    for(int i=0;i<exp.length();i++)
    {
        if(exp[i]=='(')
        {
            s.push(exp[i]);
        }
        else
        {  
        	if(s.size()!= 0 && s.top() == '(')
                s.pop();
            else 
                return false;
        }
        
    }
    
    if(s.size() == 0)
        return true; 
    
    return false;
    
}
