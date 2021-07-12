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

Node * bubbleSort(Node * head) 
{
    int count = 0, i, j;
    Node * temp = head;
    
    while (temp != NULL) 
    {
        temp = temp -> next;
        count++;
    }
    
    for (i = 0; i < count - 1; i++) 
    {
        temp = head;
        
        for (j = 0; j < count - 1; j++) 
        {
            if (temp -> data > temp -> next -> data)
            {
                int a = temp -> data;
                temp -> data = temp -> next -> data;
                temp -> next -> data = a;
            }
            
            temp = temp -> next;
            
            if (temp == NULL)
                break;
        }

    }
    
    return (head);
}
