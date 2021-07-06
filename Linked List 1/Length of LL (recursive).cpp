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

int length(Node * head) 
{
    if (head == NULL)
        return (0);
    
    head = head -> next;
    
    int ans = length(head);
    
    return (ans + 1);
}
