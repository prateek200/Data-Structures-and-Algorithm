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

Node * midPoint(Node * head)
{
    int count = 0;
    Node * temp = head;
    
    while (temp != NULL) 
    {
        temp = temp -> next;
        count++;
    }
    
    int k = (count - 1) / 2;
    temp = head;
    
    for (int i = 0; i < k; i++)
        temp = temp -> next;
    
    return (temp);
}
