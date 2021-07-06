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

Node * deleteNode(Node * head, int i) 
{
    if (head == NULL)
        return (NULL);

    if (i == 0)
        return (head -> next);

    head -> next = deleteNode(head -> next, i - 1);

    return (head);

}
