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

Node * swapNodes(Node * head, int i, int j) 
{
    int k;
    Node * temp = head;
    
    for (k = 0; k < i; k++)
        temp = temp -> next;
    
    Node * temp1 = head;
    
    for (k = 0; k < j; k++)
        temp1 = temp1 -> next;
    
    k = temp -> data;
    temp -> data = temp1 -> data;
    temp1 -> data = k;
    
    return (head);
}
