/**********
 * Following is the Node class that is already written.
 
class Node{
public:
    int data;
    Node *next;
    Node(int data){
        this -> data = data;
        this -> next = NULL;
    }
};
 
*********/

int helper(Node * head) 
{
    if (head -> next == NULL) 
	{
        int s = head -> data;
        s++;
        head -> data = s % 10;
        return (s / 10);
    }
    
	int k = helper(head -> next);
    k += head -> data;
    head -> data = k % 10;
    
	return (k / 10);
}

Node * NextLargeNumber(Node * head) 
{
    int k = helper(head);
    
	if (k == 1) 
	{
        Node * head1 = new Node(1);
        head1 -> next = head;
        return (head1);
    }
    return (head);
}
