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

class Pair 
{
    public:
        Node * head;
    Node * tail;
};

Pair reverseLL_2(Node * head) 
{
    if (head == NULL || head -> next == NULL) 
    {
        Pair ans;
        ans.head = head;
        ans.tail = head;
        return (ans);
    }
    
    Pair smallans = reverseLL_2(head -> next);
    smallans.tail -> next = head;
    head -> next = NULL;
    Pair ans;
    ans.head = smallans.head;
    ans.tail = head;
    
    return (ans);
}

Node * kReverse(Node * head, int n) 
{
    if (head == NULL || head -> next == NULL)
        return (head);
        
    int count = 1;
    Node * h1 = head;
    Node * h2 = NULL;
    Node * t1 = head;
    
    while (count < n) 
    {
        if (head -> next == NULL)
        {            
            break;
        }
        else 
        {
            t1 = head -> next;
            head = head -> next;
        }
        
        count++;
    }
    
    h2 = t1 -> next;
    t1 -> next = NULL;
    Pair ans = reverseLL_2(h1);
    Node * smallans = kReverse(h2, n);
    ans.tail -> next = smallans;
    
    return (ans.head);
}
