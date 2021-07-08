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

Node * removeDuplicates(Node * head) 
{
    if (head == NULL)
        return NULL;

    Node * t1 = head;
    Node * t2 = head -> next;
    
    while (t2 != NULL) 
    {
        if (t2 -> data == t1 -> data) 
        {
            t1 -> next = t2 -> next;
            t2 = t2 -> next;
        } 
        else 
        {
            t1 = t2;
            t2 = t2 -> next;
        }
    }
    
    return head;
}
