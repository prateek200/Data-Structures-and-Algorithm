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

Node * evenAfterOdd(Node * head) 
{
    Node * odh = NULL, * odt = NULL, * evt = NULL, * evh = NULL;
    
    while (head != NULL) 
    {
        if (head -> data % 2 != 0) 
        {
            if (odh == NULL) 
            {
                odh = head;
                odt = head;
            } 
            else 
            {
                odt -> next = head;
                odt = odt -> next;
            }
        }
        
        if (head -> data % 2 == 0) 
        {
            if (evh == NULL) 
            {
                evh = head;
                evt = head;
            } 
            else
            {
                evt -> next = head;
                evt = evt -> next;
            }
        }
        
        head = head -> next;
    }
    
    if (odh == NULL)
        return (evh);
    
    if (evh == NULL)
        return (odh);
    
    odt -> next = evh;
    evt -> next = NULL;
    
    return (odh);
}
