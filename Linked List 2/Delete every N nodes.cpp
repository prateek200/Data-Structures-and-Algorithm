/****************************************************************
 
    Following is the class structure of the Node class:

        class Node
        {
        public:
	        int data;
	        Node *next;
	        Node(int data)
	        {
		        this->data = data;
		        this->next = NULL;
	        }
        };

*****************************************************************/

Node * skipMdeleteN(Node * head, int M, int N) 
{
    int k;
    Node * temp = head, * temp1;
    
    while (temp != NULL) 
    {
        for (k = 0; k < M - 1; k++) 
        {
            temp = temp -> next;
            
            if (temp == NULL)
                return (head);
        }
        
        temp1 = temp;
        
        if (temp1 == NULL)
            break;
        
        for (k = 0; k <= N - 1; k++) 
        {
            temp1 = temp1 -> next;
            
            if (temp1 == NULL) 
            {
                temp -> next = NULL;
                return (head);
            }
        }
        
        temp -> next = temp1 -> next;
        temp = temp1 -> next;
    }
    
    return (head);
}
