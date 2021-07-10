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

Node * reverseLinkedListRec(Node * head) 
{
    if (head == NULL || head -> next == NULL) 
    {
        return head;
    }
    
    Node * small = reverseLinkedListRec(head -> next);
    
    Node * temp = small;
    Node * tail = head -> next;
    tail -> next = head;
    head -> next = NULL;
    return small;
}
