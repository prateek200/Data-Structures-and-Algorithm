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

Node *reverseLinkedList(Node *head) 
{

    Node *p = head;
    Node *q = NULL;
    Node *r = NULL;
    
    while(p!=NULL){
        r = q;
        q = p;
        p = p->next;
        q->next = r;
    }
    
    return q;
}
