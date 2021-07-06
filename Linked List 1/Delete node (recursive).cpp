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

Node * deleteNodeRec(Node * head, int i) 
{
    if (head == NULL)
        return (NULL);

    if (i == 0) 
    {
        Node * temp = head -> next;
        delete head;

        return (temp);
    }
    
    head -> next = deleteNodeRec(head -> next, i - 1);
}
