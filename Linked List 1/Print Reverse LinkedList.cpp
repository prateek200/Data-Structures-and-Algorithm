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

void printReverse(Node * head) 
{
    Node * temp = head;
    
    if (temp == NULL)
    {
        return;
    }
    else 
    {
        printReverse(temp -> next);
        cout << temp -> data << ' ';
    }
}
