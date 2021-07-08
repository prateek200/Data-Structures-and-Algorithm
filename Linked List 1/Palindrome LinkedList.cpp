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

bool isPalindrome(Node * head) 
{
    if (head == NULL)
        return true;

    int count = 0;

    Node * temp = head;
    
    while (temp -> next != NULL) 
    {
        temp = temp -> next;
        count++;
    }
    
    count++;
    int i = 0, j;
    Node * temp1 = head;
    
    while (i <= (count / 2)) 
    {
        j = 0;
        temp = head;
        
        while (j < count - 1 - i) 
        {
            temp = temp -> next;
            j++;
        }
        
        if (temp -> data != temp1 -> data)
            return (0);
        
        temp1 = temp1 -> next;
        i++;
    }
    
    return (1);
}
