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

Node * mergeTwoSortedLinkedLists(Node * head1, Node * head2)
{
    if (head1 == NULL)
        return head2;

    if (head2 == NULL)
        return head1;

    Node * temp, * change;
    
    if (head1 -> data <= head2 -> data) 
    {
        temp = head1;
        change = head1;
        head1 = head1 -> next;
    } 
    else 
    {
        temp = head2;
        change = head2;
        head2 = head2 -> next;
    }
    
    while (head1 != NULL && head2 != NULL) 
    {
        if (head1 -> data <= head2 -> data) 
        {
            change -> next = head1;
            head1 = head1 -> next;
            change = change -> next;
        } 
        else
        {
            change -> next = head2;
            head2 = head2 -> next;
            change = change -> next;
        }
    }
    
    if (head1 == NULL)
    {
        change -> next = head2;
    } 
    else 
    {
        change -> next = head1;
    }

    return (temp);
}
