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

Node * appendLastNToFirst(Node * head, int n)
{
    int count = 0;

    if (head == NULL)
        return NULL;

    Node * temp = head;
    
    while (temp -> next != NULL) 
    {
        temp = temp -> next;
        count++;
    }
    
    Node * temp1 = head;
    
    for (int i = 0; i < count - n; i++) 
    {
        temp1 = temp1 -> next;
    }
    
    temp -> next = head;
    head = temp1 -> next;
    temp1 -> next = NULL;
    
    return (head);
}
